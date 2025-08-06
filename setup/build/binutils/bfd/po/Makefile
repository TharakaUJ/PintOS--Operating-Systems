# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2001-2016 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = bfd
VERSION = 2.27

SHELL = /bin/sh


srcdir = ../../../../src/binutils-2.27/bfd/po
top_srcdir = ../../../../src/binutils-2.27/bfd
VPATH = ../../../../src/binutils-2.27/bfd/po
top_builddir = ..

prefix = /home/pintos/setup/x86_64
exec_prefix = ${prefix}
datadir = $(prefix)/
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = /usr/bin/install -c -m 644
MKINSTALLDIRS = $(top_builddir)/../../../src/binutils-2.27/bfd/../mkinstalldirs

CC = gcc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH :
MSGFMT = :
XGETTEXT = PATH=../src:$$PATH :
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -g -O2
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/fr.po $(srcdir)/tr.po $(srcdir)/ja.po $(srcdir)/es.po $(srcdir)/sv.po $(srcdir)/da.po $(srcdir)/zh_CN.po $(srcdir)/ro.po $(srcdir)/rw.po $(srcdir)/vi.po $(srcdir)/fi.po $(srcdir)/id.po $(srcdir)/ru.po $(srcdir)/uk.po $(srcdir)/sr.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/tr.gmo $(srcdir)/ja.gmo $(srcdir)/es.gmo $(srcdir)/sv.gmo $(srcdir)/da.gmo $(srcdir)/zh_CN.gmo $(srcdir)/ro.gmo $(srcdir)/rw.gmo $(srcdir)/vi.gmo $(srcdir)/fi.gmo $(srcdir)/id.gmo $(srcdir)/ru.gmo $(srcdir)/uk.gmo $(srcdir)/sr.gmo
DISTFILES = ChangeLog Makefile.in.in SRC-POTFILES.in BLD-POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of source dir POTFILES.
SRC-POTFILES = \
	../../../../src/binutils-2.27/bfd/aix386-core.c \
	../../../../src/binutils-2.27/bfd/aix5ppc-core.c \
	../../../../src/binutils-2.27/bfd/aout-adobe.c \
	../../../../src/binutils-2.27/bfd/aout-arm.c \
	../../../../src/binutils-2.27/bfd/aout-cris.c \
	../../../../src/binutils-2.27/bfd/aout-ns32k.c \
	../../../../src/binutils-2.27/bfd/aout-sparcle.c \
	../../../../src/binutils-2.27/bfd/aout-target.h \
	../../../../src/binutils-2.27/bfd/aout-tic30.c \
	../../../../src/binutils-2.27/bfd/aout0.c \
	../../../../src/binutils-2.27/bfd/aout32.c \
	../../../../src/binutils-2.27/bfd/aout64.c \
	../../../../src/binutils-2.27/bfd/aoutf1.h \
	../../../../src/binutils-2.27/bfd/aoutx.h \
	../../../../src/binutils-2.27/bfd/archive.c \
	../../../../src/binutils-2.27/bfd/archive64.c \
	../../../../src/binutils-2.27/bfd/archures.c \
	../../../../src/binutils-2.27/bfd/armnetbsd.c \
	../../../../src/binutils-2.27/bfd/bfd.c \
	../../../../src/binutils-2.27/bfd/bfdio.c \
	../../../../src/binutils-2.27/bfd/bfdwin.c \
	../../../../src/binutils-2.27/bfd/binary.c \
	../../../../src/binutils-2.27/bfd/bout.c \
	../../../../src/binutils-2.27/bfd/cache.c \
	../../../../src/binutils-2.27/bfd/cf-i386lynx.c \
	../../../../src/binutils-2.27/bfd/cf-sparclynx.c \
	../../../../src/binutils-2.27/bfd/cisco-core.c \
	../../../../src/binutils-2.27/bfd/coff-alpha.c \
	../../../../src/binutils-2.27/bfd/coff-apollo.c \
	../../../../src/binutils-2.27/bfd/coff-arm.c \
	../../../../src/binutils-2.27/bfd/coff-aux.c \
	../../../../src/binutils-2.27/bfd/coff-bfd.c \
	../../../../src/binutils-2.27/bfd/coff-go32.c \
	../../../../src/binutils-2.27/bfd/coff-h8300.c \
	../../../../src/binutils-2.27/bfd/coff-h8500.c \
	../../../../src/binutils-2.27/bfd/coff-i386.c \
	../../../../src/binutils-2.27/bfd/coff-i860.c \
	../../../../src/binutils-2.27/bfd/coff-i960.c \
	../../../../src/binutils-2.27/bfd/coff-m68k.c \
	../../../../src/binutils-2.27/bfd/coff-m88k.c \
	../../../../src/binutils-2.27/bfd/coff-mips.c \
	../../../../src/binutils-2.27/bfd/coff-rs6000.c \
	../../../../src/binutils-2.27/bfd/coff-sh.c \
	../../../../src/binutils-2.27/bfd/coff-sparc.c \
	../../../../src/binutils-2.27/bfd/coff-stgo32.c \
	../../../../src/binutils-2.27/bfd/coff-svm68k.c \
	../../../../src/binutils-2.27/bfd/coff-tic30.c \
	../../../../src/binutils-2.27/bfd/coff-tic4x.c \
	../../../../src/binutils-2.27/bfd/coff-tic54x.c \
	../../../../src/binutils-2.27/bfd/coff-tic80.c \
	../../../../src/binutils-2.27/bfd/coff-u68k.c \
	../../../../src/binutils-2.27/bfd/coff-w65.c \
	../../../../src/binutils-2.27/bfd/coff-we32k.c \
	../../../../src/binutils-2.27/bfd/coff-x86_64.c \
	../../../../src/binutils-2.27/bfd/coff-z80.c \
	../../../../src/binutils-2.27/bfd/coff-z8k.c \
	../../../../src/binutils-2.27/bfd/coff64-rs6000.c \
	../../../../src/binutils-2.27/bfd/coffcode.h \
	../../../../src/binutils-2.27/bfd/coffgen.c \
	../../../../src/binutils-2.27/bfd/cofflink.c \
	../../../../src/binutils-2.27/bfd/coffswap.h \
	../../../../src/binutils-2.27/bfd/compress.c \
	../../../../src/binutils-2.27/bfd/corefile.c \
	../../../../src/binutils-2.27/bfd/cpu-aarch64.c \
	../../../../src/binutils-2.27/bfd/cpu-alpha.c \
	../../../../src/binutils-2.27/bfd/cpu-arc.c \
	../../../../src/binutils-2.27/bfd/cpu-arm.c \
	../../../../src/binutils-2.27/bfd/cpu-avr.c \
	../../../../src/binutils-2.27/bfd/cpu-bfin.c \
	../../../../src/binutils-2.27/bfd/cpu-cr16.c \
	../../../../src/binutils-2.27/bfd/cpu-cr16c.c \
	../../../../src/binutils-2.27/bfd/cpu-cris.c \
	../../../../src/binutils-2.27/bfd/cpu-crx.c \
	../../../../src/binutils-2.27/bfd/cpu-d10v.c \
	../../../../src/binutils-2.27/bfd/cpu-d30v.c \
	../../../../src/binutils-2.27/bfd/cpu-dlx.c \
	../../../../src/binutils-2.27/bfd/cpu-epiphany.c \
	../../../../src/binutils-2.27/bfd/cpu-fr30.c \
	../../../../src/binutils-2.27/bfd/cpu-frv.c \
	../../../../src/binutils-2.27/bfd/cpu-ft32.c \
	../../../../src/binutils-2.27/bfd/cpu-h8300.c \
	../../../../src/binutils-2.27/bfd/cpu-h8500.c \
	../../../../src/binutils-2.27/bfd/cpu-hppa.c \
	../../../../src/binutils-2.27/bfd/cpu-i370.c \
	../../../../src/binutils-2.27/bfd/cpu-i386.c \
	../../../../src/binutils-2.27/bfd/cpu-i860.c \
	../../../../src/binutils-2.27/bfd/cpu-i960.c \
	../../../../src/binutils-2.27/bfd/cpu-ia64.c \
	../../../../src/binutils-2.27/bfd/cpu-iamcu.c \
	../../../../src/binutils-2.27/bfd/cpu-ip2k.c \
	../../../../src/binutils-2.27/bfd/cpu-iq2000.c \
	../../../../src/binutils-2.27/bfd/cpu-k1om.c \
	../../../../src/binutils-2.27/bfd/cpu-l1om.c \
	../../../../src/binutils-2.27/bfd/cpu-lm32.c \
	../../../../src/binutils-2.27/bfd/cpu-m10200.c \
	../../../../src/binutils-2.27/bfd/cpu-m10300.c \
	../../../../src/binutils-2.27/bfd/cpu-m32c.c \
	../../../../src/binutils-2.27/bfd/cpu-m32r.c \
	../../../../src/binutils-2.27/bfd/cpu-m68hc11.c \
	../../../../src/binutils-2.27/bfd/cpu-m68hc12.c \
	../../../../src/binutils-2.27/bfd/cpu-m68k.c \
	../../../../src/binutils-2.27/bfd/cpu-m88k.c \
	../../../../src/binutils-2.27/bfd/cpu-m9s12x.c \
	../../../../src/binutils-2.27/bfd/cpu-m9s12xg.c \
	../../../../src/binutils-2.27/bfd/cpu-mcore.c \
	../../../../src/binutils-2.27/bfd/cpu-mep.c \
	../../../../src/binutils-2.27/bfd/cpu-metag.c \
	../../../../src/binutils-2.27/bfd/cpu-microblaze.c \
	../../../../src/binutils-2.27/bfd/cpu-mips.c \
	../../../../src/binutils-2.27/bfd/cpu-mmix.c \
	../../../../src/binutils-2.27/bfd/cpu-moxie.c \
	../../../../src/binutils-2.27/bfd/cpu-msp430.c \
	../../../../src/binutils-2.27/bfd/cpu-mt.c \
	../../../../src/binutils-2.27/bfd/cpu-nds32.c \
	../../../../src/binutils-2.27/bfd/cpu-nios2.c \
	../../../../src/binutils-2.27/bfd/cpu-ns32k.c \
	../../../../src/binutils-2.27/bfd/cpu-or1k.c \
	../../../../src/binutils-2.27/bfd/cpu-pdp11.c \
	../../../../src/binutils-2.27/bfd/cpu-pj.c \
	../../../../src/binutils-2.27/bfd/cpu-plugin.c \
	../../../../src/binutils-2.27/bfd/cpu-powerpc.c \
	../../../../src/binutils-2.27/bfd/cpu-rl78.c \
	../../../../src/binutils-2.27/bfd/cpu-rs6000.c \
	../../../../src/binutils-2.27/bfd/cpu-rx.c \
	../../../../src/binutils-2.27/bfd/cpu-s390.c \
	../../../../src/binutils-2.27/bfd/cpu-score.c \
	../../../../src/binutils-2.27/bfd/cpu-sh.c \
	../../../../src/binutils-2.27/bfd/cpu-sparc.c \
	../../../../src/binutils-2.27/bfd/cpu-spu.c \
	../../../../src/binutils-2.27/bfd/cpu-tic30.c \
	../../../../src/binutils-2.27/bfd/cpu-tic4x.c \
	../../../../src/binutils-2.27/bfd/cpu-tic54x.c \
	../../../../src/binutils-2.27/bfd/cpu-tic6x.c \
	../../../../src/binutils-2.27/bfd/cpu-tic80.c \
	../../../../src/binutils-2.27/bfd/cpu-tilegx.c \
	../../../../src/binutils-2.27/bfd/cpu-tilepro.c \
	../../../../src/binutils-2.27/bfd/cpu-v850.c \
	../../../../src/binutils-2.27/bfd/cpu-v850_rh850.c \
	../../../../src/binutils-2.27/bfd/cpu-vax.c \
	../../../../src/binutils-2.27/bfd/cpu-visium.c \
	../../../../src/binutils-2.27/bfd/cpu-w65.c \
	../../../../src/binutils-2.27/bfd/cpu-we32k.c \
	../../../../src/binutils-2.27/bfd/cpu-xc16x.c \
	../../../../src/binutils-2.27/bfd/cpu-xgate.c \
	../../../../src/binutils-2.27/bfd/cpu-xstormy16.c \
	../../../../src/binutils-2.27/bfd/cpu-xtensa.c \
	../../../../src/binutils-2.27/bfd/cpu-z80.c \
	../../../../src/binutils-2.27/bfd/cpu-z8k.c \
	../../../../src/binutils-2.27/bfd/demo64.c \
	../../../../src/binutils-2.27/bfd/dwarf1.c \
	../../../../src/binutils-2.27/bfd/dwarf2.c \
	../../../../src/binutils-2.27/bfd/ecoff.c \
	../../../../src/binutils-2.27/bfd/ecofflink.c \
	../../../../src/binutils-2.27/bfd/ecoffswap.h \
	../../../../src/binutils-2.27/bfd/elf-attrs.c \
	../../../../src/binutils-2.27/bfd/elf-bfd.h \
	../../../../src/binutils-2.27/bfd/elf-eh-frame.c \
	../../../../src/binutils-2.27/bfd/elf-hppa.h \
	../../../../src/binutils-2.27/bfd/elf-ifunc.c \
	../../../../src/binutils-2.27/bfd/elf-linux-core.h \
	../../../../src/binutils-2.27/bfd/elf-m10200.c \
	../../../../src/binutils-2.27/bfd/elf-m10300.c \
	../../../../src/binutils-2.27/bfd/elf-nacl.c \
	../../../../src/binutils-2.27/bfd/elf-strtab.c \
	../../../../src/binutils-2.27/bfd/elf-vxworks.c \
	../../../../src/binutils-2.27/bfd/elf.c \
	../../../../src/binutils-2.27/bfd/elf32-am33lin.c \
	../../../../src/binutils-2.27/bfd/elf32-arc.c \
	../../../../src/binutils-2.27/bfd/elf32-arm.c \
	../../../../src/binutils-2.27/bfd/elf32-avr.c \
	../../../../src/binutils-2.27/bfd/elf32-bfin.c \
	../../../../src/binutils-2.27/bfd/elf32-cr16.c \
	../../../../src/binutils-2.27/bfd/elf32-cr16c.c \
	../../../../src/binutils-2.27/bfd/elf32-cris.c \
	../../../../src/binutils-2.27/bfd/elf32-crx.c \
	../../../../src/binutils-2.27/bfd/elf32-d10v.c \
	../../../../src/binutils-2.27/bfd/elf32-d30v.c \
	../../../../src/binutils-2.27/bfd/elf32-dlx.c \
	../../../../src/binutils-2.27/bfd/elf32-epiphany.c \
	../../../../src/binutils-2.27/bfd/elf32-fr30.c \
	../../../../src/binutils-2.27/bfd/elf32-frv.c \
	../../../../src/binutils-2.27/bfd/elf32-ft32.c \
	../../../../src/binutils-2.27/bfd/elf32-gen.c \
	../../../../src/binutils-2.27/bfd/elf32-h8300.c \
	../../../../src/binutils-2.27/bfd/elf32-hppa.c \
	../../../../src/binutils-2.27/bfd/elf32-hppa.h \
	../../../../src/binutils-2.27/bfd/elf32-i370.c \
	../../../../src/binutils-2.27/bfd/elf32-i386.c \
	../../../../src/binutils-2.27/bfd/elf32-i860.c \
	../../../../src/binutils-2.27/bfd/elf32-i960.c \
	../../../../src/binutils-2.27/bfd/elf32-ip2k.c \
	../../../../src/binutils-2.27/bfd/elf32-iq2000.c \
	../../../../src/binutils-2.27/bfd/elf32-lm32.c \
	../../../../src/binutils-2.27/bfd/elf32-m32c.c \
	../../../../src/binutils-2.27/bfd/elf32-m32r.c \
	../../../../src/binutils-2.27/bfd/elf32-m68hc11.c \
	../../../../src/binutils-2.27/bfd/elf32-m68hc12.c \
	../../../../src/binutils-2.27/bfd/elf32-m68hc1x.c \
	../../../../src/binutils-2.27/bfd/elf32-m68k.c \
	../../../../src/binutils-2.27/bfd/elf32-m88k.c \
	../../../../src/binutils-2.27/bfd/elf32-mcore.c \
	../../../../src/binutils-2.27/bfd/elf32-mep.c \
	../../../../src/binutils-2.27/bfd/elf32-metag.c \
	../../../../src/binutils-2.27/bfd/elf32-microblaze.c \
	../../../../src/binutils-2.27/bfd/elf32-mips.c \
	../../../../src/binutils-2.27/bfd/elf32-moxie.c \
	../../../../src/binutils-2.27/bfd/elf32-msp430.c \
	../../../../src/binutils-2.27/bfd/elf32-mt.c \
	../../../../src/binutils-2.27/bfd/elf32-nds32.c \
	../../../../src/binutils-2.27/bfd/elf32-nios2.c \
	../../../../src/binutils-2.27/bfd/elf32-or1k.c \
	../../../../src/binutils-2.27/bfd/elf32-pj.c \
	../../../../src/binutils-2.27/bfd/elf32-ppc.c \
	../../../../src/binutils-2.27/bfd/elf32-rl78.c \
	../../../../src/binutils-2.27/bfd/elf32-rx.c \
	../../../../src/binutils-2.27/bfd/elf32-s390.c \
	../../../../src/binutils-2.27/bfd/elf32-score.c \
	../../../../src/binutils-2.27/bfd/elf32-score7.c \
	../../../../src/binutils-2.27/bfd/elf32-sh-symbian.c \
	../../../../src/binutils-2.27/bfd/elf32-sh.c \
	../../../../src/binutils-2.27/bfd/elf32-sh64-com.c \
	../../../../src/binutils-2.27/bfd/elf32-sh64.c \
	../../../../src/binutils-2.27/bfd/elf32-sparc.c \
	../../../../src/binutils-2.27/bfd/elf32-spu.c \
	../../../../src/binutils-2.27/bfd/elf32-tic6x.c \
	../../../../src/binutils-2.27/bfd/elf32-tilegx.c \
	../../../../src/binutils-2.27/bfd/elf32-tilepro.c \
	../../../../src/binutils-2.27/bfd/elf32-v850.c \
	../../../../src/binutils-2.27/bfd/elf32-vax.c \
	../../../../src/binutils-2.27/bfd/elf32-visium.c \
	../../../../src/binutils-2.27/bfd/elf32-xc16x.c \
	../../../../src/binutils-2.27/bfd/elf32-xgate.c \
	../../../../src/binutils-2.27/bfd/elf32-xstormy16.c \
	../../../../src/binutils-2.27/bfd/elf32-xtensa.c \
	../../../../src/binutils-2.27/bfd/elf32.c \
	../../../../src/binutils-2.27/bfd/elf64-alpha.c \
	../../../../src/binutils-2.27/bfd/elf64-gen.c \
	../../../../src/binutils-2.27/bfd/elf64-hppa.c \
	../../../../src/binutils-2.27/bfd/elf64-hppa.h \
	../../../../src/binutils-2.27/bfd/elf64-ia64-vms.c \
	../../../../src/binutils-2.27/bfd/elf64-mips.c \
	../../../../src/binutils-2.27/bfd/elf64-mmix.c \
	../../../../src/binutils-2.27/bfd/elf64-ppc.c \
	../../../../src/binutils-2.27/bfd/elf64-s390.c \
	../../../../src/binutils-2.27/bfd/elf64-sh64.c \
	../../../../src/binutils-2.27/bfd/elf64-sparc.c \
	../../../../src/binutils-2.27/bfd/elf64-tilegx.c \
	../../../../src/binutils-2.27/bfd/elf64-x86-64.c \
	../../../../src/binutils-2.27/bfd/elf64.c \
	../../../../src/binutils-2.27/bfd/elfcode.h \
	../../../../src/binutils-2.27/bfd/elfcore.h \
	../../../../src/binutils-2.27/bfd/elflink.c \
	../../../../src/binutils-2.27/bfd/elfn32-mips.c \
	../../../../src/binutils-2.27/bfd/elfxx-aarch64.c \
	../../../../src/binutils-2.27/bfd/elfxx-ia64.c \
	../../../../src/binutils-2.27/bfd/elfxx-mips.c \
	../../../../src/binutils-2.27/bfd/elfxx-sparc.c \
	../../../../src/binutils-2.27/bfd/elfxx-tilegx.c \
	../../../../src/binutils-2.27/bfd/epoc-pe-arm.c \
	../../../../src/binutils-2.27/bfd/epoc-pei-arm.c \
	../../../../src/binutils-2.27/bfd/format.c \
	../../../../src/binutils-2.27/bfd/freebsd.h \
	../../../../src/binutils-2.27/bfd/genlink.h \
	../../../../src/binutils-2.27/bfd/go32stub.h \
	../../../../src/binutils-2.27/bfd/hash.c \
	../../../../src/binutils-2.27/bfd/hp300bsd.c \
	../../../../src/binutils-2.27/bfd/hp300hpux.c \
	../../../../src/binutils-2.27/bfd/hpux-core.c \
	../../../../src/binutils-2.27/bfd/i386aout.c \
	../../../../src/binutils-2.27/bfd/i386bsd.c \
	../../../../src/binutils-2.27/bfd/i386dynix.c \
	../../../../src/binutils-2.27/bfd/i386freebsd.c \
	../../../../src/binutils-2.27/bfd/i386linux.c \
	../../../../src/binutils-2.27/bfd/i386lynx.c \
	../../../../src/binutils-2.27/bfd/i386mach3.c \
	../../../../src/binutils-2.27/bfd/i386msdos.c \
	../../../../src/binutils-2.27/bfd/i386netbsd.c \
	../../../../src/binutils-2.27/bfd/i386os9k.c \
	../../../../src/binutils-2.27/bfd/ieee.c \
	../../../../src/binutils-2.27/bfd/ihex.c \
	../../../../src/binutils-2.27/bfd/init.c \
	../../../../src/binutils-2.27/bfd/irix-core.c \
	../../../../src/binutils-2.27/bfd/libaout.h \
	../../../../src/binutils-2.27/bfd/libbfd.c \
	../../../../src/binutils-2.27/bfd/libbfd.h \
	../../../../src/binutils-2.27/bfd/libcoff.h \
	../../../../src/binutils-2.27/bfd/libecoff.h \
	../../../../src/binutils-2.27/bfd/libhppa.h \
	../../../../src/binutils-2.27/bfd/libieee.h \
	../../../../src/binutils-2.27/bfd/libnlm.h \
	../../../../src/binutils-2.27/bfd/liboasys.h \
	../../../../src/binutils-2.27/bfd/libpei.h \
	../../../../src/binutils-2.27/bfd/libxcoff.h \
	../../../../src/binutils-2.27/bfd/linker.c \
	../../../../src/binutils-2.27/bfd/lynx-core.c \
	../../../../src/binutils-2.27/bfd/m68k4knetbsd.c \
	../../../../src/binutils-2.27/bfd/m68klinux.c \
	../../../../src/binutils-2.27/bfd/m68knetbsd.c \
	../../../../src/binutils-2.27/bfd/m88kmach3.c \
	../../../../src/binutils-2.27/bfd/m88kopenbsd.c \
	../../../../src/binutils-2.27/bfd/mach-o-aarch64.c \
	../../../../src/binutils-2.27/bfd/mach-o-arm.c \
	../../../../src/binutils-2.27/bfd/mach-o-i386.c \
	../../../../src/binutils-2.27/bfd/mach-o-x86-64.c \
	../../../../src/binutils-2.27/bfd/mach-o.c \
	../../../../src/binutils-2.27/bfd/mach-o.h \
	../../../../src/binutils-2.27/bfd/merge.c \
	../../../../src/binutils-2.27/bfd/mipsbsd.c \
	../../../../src/binutils-2.27/bfd/mmo.c \
	../../../../src/binutils-2.27/bfd/netbsd-core.c \
	../../../../src/binutils-2.27/bfd/netbsd.h \
	../../../../src/binutils-2.27/bfd/newsos3.c \
	../../../../src/binutils-2.27/bfd/nlm-target.h \
	../../../../src/binutils-2.27/bfd/nlm.c \
	../../../../src/binutils-2.27/bfd/nlm32-alpha.c \
	../../../../src/binutils-2.27/bfd/nlm32-i386.c \
	../../../../src/binutils-2.27/bfd/nlm32-ppc.c \
	../../../../src/binutils-2.27/bfd/nlm32-sparc.c \
	../../../../src/binutils-2.27/bfd/nlm32.c \
	../../../../src/binutils-2.27/bfd/nlm64.c \
	../../../../src/binutils-2.27/bfd/nlmcode.h \
	../../../../src/binutils-2.27/bfd/nlmswap.h \
	../../../../src/binutils-2.27/bfd/ns32k.h \
	../../../../src/binutils-2.27/bfd/ns32knetbsd.c \
	../../../../src/binutils-2.27/bfd/oasys.c \
	../../../../src/binutils-2.27/bfd/opncls.c \
	../../../../src/binutils-2.27/bfd/osf-core.c \
	../../../../src/binutils-2.27/bfd/pc532-mach.c \
	../../../../src/binutils-2.27/bfd/pdp11.c \
	../../../../src/binutils-2.27/bfd/pe-arm-wince.c \
	../../../../src/binutils-2.27/bfd/pe-arm.c \
	../../../../src/binutils-2.27/bfd/pe-i386.c \
	../../../../src/binutils-2.27/bfd/pe-mcore.c \
	../../../../src/binutils-2.27/bfd/pe-mips.c \
	../../../../src/binutils-2.27/bfd/pe-ppc.c \
	../../../../src/binutils-2.27/bfd/pe-sh.c \
	../../../../src/binutils-2.27/bfd/pe-x86_64.c \
	../../../../src/binutils-2.27/bfd/pef-traceback.h \
	../../../../src/binutils-2.27/bfd/pef.c \
	../../../../src/binutils-2.27/bfd/pef.h \
	../../../../src/binutils-2.27/bfd/pei-arm-wince.c \
	../../../../src/binutils-2.27/bfd/pei-arm.c \
	../../../../src/binutils-2.27/bfd/pei-i386.c \
	../../../../src/binutils-2.27/bfd/pei-ia64.c \
	../../../../src/binutils-2.27/bfd/pei-mcore.c \
	../../../../src/binutils-2.27/bfd/pei-mips.c \
	../../../../src/binutils-2.27/bfd/pei-ppc.c \
	../../../../src/binutils-2.27/bfd/pei-sh.c \
	../../../../src/binutils-2.27/bfd/pei-x86_64.c \
	../../../../src/binutils-2.27/bfd/peicode.h \
	../../../../src/binutils-2.27/bfd/plugin.c \
	../../../../src/binutils-2.27/bfd/ppcboot.c \
	../../../../src/binutils-2.27/bfd/reloc.c \
	../../../../src/binutils-2.27/bfd/reloc16.c \
	../../../../src/binutils-2.27/bfd/riscix.c \
	../../../../src/binutils-2.27/bfd/rs6000-core.c \
	../../../../src/binutils-2.27/bfd/sco5-core.c \
	../../../../src/binutils-2.27/bfd/section.c \
	../../../../src/binutils-2.27/bfd/simple.c \
	../../../../src/binutils-2.27/bfd/som.c \
	../../../../src/binutils-2.27/bfd/som.h \
	../../../../src/binutils-2.27/bfd/sparclinux.c \
	../../../../src/binutils-2.27/bfd/sparclynx.c \
	../../../../src/binutils-2.27/bfd/sparcnetbsd.c \
	../../../../src/binutils-2.27/bfd/srec.c \
	../../../../src/binutils-2.27/bfd/stab-syms.c \
	../../../../src/binutils-2.27/bfd/stabs.c \
	../../../../src/binutils-2.27/bfd/sunos.c \
	../../../../src/binutils-2.27/bfd/syms.c \
	../../../../src/binutils-2.27/bfd/targets.c \
	../../../../src/binutils-2.27/bfd/tekhex.c \
	../../../../src/binutils-2.27/bfd/trad-core.c \
	../../../../src/binutils-2.27/bfd/vax1knetbsd.c \
	../../../../src/binutils-2.27/bfd/vaxbsd.c \
	../../../../src/binutils-2.27/bfd/vaxnetbsd.c \
	../../../../src/binutils-2.27/bfd/verilog.c \
	../../../../src/binutils-2.27/bfd/versados.c \
	../../../../src/binutils-2.27/bfd/version.h \
	../../../../src/binutils-2.27/bfd/vms-alpha.c \
	../../../../src/binutils-2.27/bfd/vms-lib.c \
	../../../../src/binutils-2.27/bfd/vms-misc.c \
	../../../../src/binutils-2.27/bfd/vms.h \
	../../../../src/binutils-2.27/bfd/xcofflink.c \
	../../../../src/binutils-2.27/bfd/xsym.c \
	../../../../src/binutils-2.27/bfd/xsym.h \
	../../../../src/binutils-2.27/bfd/xtensa-isa.c \
	../../../../src/binutils-2.27/bfd/xtensa-modules.c 

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of build dir POTFILES.
BLD-POTFILES = \
	../bfd_stdint.h \
	../bfdver.h \
	../elf32-aarch64.c \
	../elf32-ia64.c \
	../elf32-target.h \
	../elf64-aarch64.c \
	../elf64-ia64.c \
	../elf64-target.h \
	../peigen.c \
	../pepigen.c \
	../pex64igen.c \
	../targmatch.h 

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(SRC-POTFILES) $(BLD-POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/SRC-POTFILES.in 
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=.. \
	  --directory=. \
	  --add-comments --keyword=_ --keyword=N_ \
	  --join-existing \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/BLD-POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-pdf:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in *.mo *.msg *.cat *.cat.m
	rm -f SRC-POTFILES BLD-POTFILES 

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES) SRC-POTFILES.in BLD-POTFILES.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

SRC-POTFILES: SRC-POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

BLD-POTFILES: BLD-POTFILES.in
	  ( rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	../& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

SRC-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/SRC-POTFILES.in

BLD-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/BLD-POTFILES.in

# Note - The presence of SRC-POTFILES and BLD-POTFILES as dependencies
# here breaks the implementation of the 'distclean' rule for maintainers.
# This is because if 'make distclean' is run in the BFD directory, the
# Makefile there will be deleted before 'distclean' is made here, and so
# the dependency SRC-POTFILES -> SRC-POTFILES.in -> ../Makefile cannot
# be satisfied.
#
# The SRC-POTFILES and BLD-POTFILES dependencies cannot be removed,
# however since it is necessary that these files be built during
# *configure* time, so that configure can insert them into the
# po/Makefile that it is creating, so that the Makefile will have
# the correct dependencies.
Makefile: Make-in ../config.status SRC-POTFILES BLD-POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
