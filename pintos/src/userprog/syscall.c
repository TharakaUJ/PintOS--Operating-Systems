#include "userprog/syscall.h"
#include <stdio.h>
#include <syscall-nr.h>
#include "threads/interrupt.h"
#include "threads/thread.h"
#include "threads/vaddr.h"
#include "userprog/pagedir.h"
#include "devices/shutdown.h"
#include "filesys/filesys.h"
#include "devices/input.h"

static void syscall_handler (struct intr_frame *);
static void validate_ptr (const void *ptr);
static int read_user_word (const void *uaddr);
static void sys_halt (void);
static void sys_exit (int status);
static int sys_write (int fd, const void *buffer, unsigned size);

void
syscall_init (void) 
{
  intr_register_int (0x30, 3, INTR_ON, syscall_handler, "syscall");
}

/* Validates a user pointer - checks if it's in user space and mapped */
static void
validate_ptr (const void *ptr)
{
  if (ptr == NULL || !is_user_vaddr (ptr) || 
      pagedir_get_page (thread_current ()->pagedir, ptr) == NULL)
    {
      thread_current ()->exit_code = -1;
      thread_exit ();
    }
}

/* Validates and reads a 4-byte word from user memory */
static int
read_user_word (const void *uaddr)
{
  validate_ptr (uaddr);
  validate_ptr ((uint8_t *) uaddr + 3);  /* Check all 4 bytes */
  return *((int *) uaddr);
}

static void
syscall_handler (struct intr_frame *f) 
{
  /* Validate stack pointer */
  validate_ptr (f->esp);
  
  /* Read syscall number */
  int syscall_num = read_user_word (f->esp);
  int *args = (int *) f->esp;
  
  switch (syscall_num)
    {
    case SYS_HALT:
      sys_halt ();
      break;
      
    case SYS_EXIT:
      sys_exit (read_user_word (args + 1));
      break;
      
    case SYS_WRITE:
      f->eax = sys_write (
        read_user_word (args + 1),
        (const void *) read_user_word (args + 2),
        (unsigned) read_user_word (args + 3)
      );
      break;
      
    default:
      thread_current ()->exit_code = -1;
      thread_exit ();
    }
}

/* System call implementations */

static void
sys_halt (void)
{
  shutdown_power_off ();
}

static void
sys_exit (int status)
{
  thread_current ()->exit_code = status;
  thread_exit ();
}

static int
sys_write (int fd, const void *buffer, unsigned size)
{
  validate_ptr (buffer);
  validate_ptr ((char *) buffer + size - 1);
  
  if (fd == 1) /* STDOUT_FILENO */
    {
      putbuf (buffer, size);
      return size;
    }
  
  return -1;
}
