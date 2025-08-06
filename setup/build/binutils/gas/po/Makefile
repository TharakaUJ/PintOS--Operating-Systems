# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003-2016 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = gas
VERSION = 2.27

SHELL = /bin/sh


srcdir = ../../../../src/binutils-2.27/gas/po
top_srcdir = ../../../../src/binutils-2.27/gas
VPATH = ../../../../src/binutils-2.27/gas/po
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
MKINSTALLDIRS = $(top_builddir)/../../../src/binutils-2.27/gas/../mkinstalldirs

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
POFILES =  $(srcdir)/fr.po $(srcdir)/tr.po $(srcdir)/es.po $(srcdir)/rw.po $(srcdir)/id.po $(srcdir)/ru.po $(srcdir)/fi.po $(srcdir)/ja.po $(srcdir)/zh_CN.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/tr.gmo $(srcdir)/es.gmo $(srcdir)/rw.gmo $(srcdir)/id.gmo $(srcdir)/ru.gmo $(srcdir)/fi.gmo $(srcdir)/ja.gmo $(srcdir)/zh_CN.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     ../../../../src/binutils-2.27/gas/app.c \
     ../../../../src/binutils-2.27/gas/as.c \
     ../../../../src/binutils-2.27/gas/as.h \
     ../../../../src/binutils-2.27/gas/asintl.h \
     ../../../../src/binutils-2.27/gas/atof-generic.c \
     ../../../../src/binutils-2.27/gas/bignum.h \
     ../../../../src/binutils-2.27/gas/bit_fix.h \
     ../../../../src/binutils-2.27/gas/cgen.c \
     ../../../../src/binutils-2.27/gas/cgen.h \
     ../../../../src/binutils-2.27/gas/compress-debug.c \
     ../../../../src/binutils-2.27/gas/compress-debug.h \
     ../../../../src/binutils-2.27/gas/cond.c \
     ../../../../src/binutils-2.27/gas/config/atof-ieee.c \
     ../../../../src/binutils-2.27/gas/config/atof-vax.c \
     ../../../../src/binutils-2.27/gas/config/e-crisaout.c \
     ../../../../src/binutils-2.27/gas/config/e-criself.c \
     ../../../../src/binutils-2.27/gas/config/e-i386aout.c \
     ../../../../src/binutils-2.27/gas/config/e-i386coff.c \
     ../../../../src/binutils-2.27/gas/config/e-i386elf.c \
     ../../../../src/binutils-2.27/gas/config/e-mipself.c \
     ../../../../src/binutils-2.27/gas/config/obj-aout.c \
     ../../../../src/binutils-2.27/gas/config/obj-aout.h \
     ../../../../src/binutils-2.27/gas/config/obj-coff.c \
     ../../../../src/binutils-2.27/gas/config/obj-coff.h \
     ../../../../src/binutils-2.27/gas/config/obj-ecoff.c \
     ../../../../src/binutils-2.27/gas/config/obj-ecoff.h \
     ../../../../src/binutils-2.27/gas/config/obj-elf.c \
     ../../../../src/binutils-2.27/gas/config/obj-elf.h \
     ../../../../src/binutils-2.27/gas/config/obj-evax.c \
     ../../../../src/binutils-2.27/gas/config/obj-evax.h \
     ../../../../src/binutils-2.27/gas/config/obj-fdpicelf.c \
     ../../../../src/binutils-2.27/gas/config/obj-fdpicelf.h \
     ../../../../src/binutils-2.27/gas/config/obj-macho.c \
     ../../../../src/binutils-2.27/gas/config/obj-macho.h \
     ../../../../src/binutils-2.27/gas/config/obj-multi.c \
     ../../../../src/binutils-2.27/gas/config/obj-multi.h \
     ../../../../src/binutils-2.27/gas/config/obj-som.c \
     ../../../../src/binutils-2.27/gas/config/obj-som.h \
     ../../../../src/binutils-2.27/gas/config/tc-aarch64.c \
     ../../../../src/binutils-2.27/gas/config/tc-aarch64.h \
     ../../../../src/binutils-2.27/gas/config/tc-alpha.c \
     ../../../../src/binutils-2.27/gas/config/tc-alpha.h \
     ../../../../src/binutils-2.27/gas/config/tc-arc.c \
     ../../../../src/binutils-2.27/gas/config/tc-arc.h \
     ../../../../src/binutils-2.27/gas/config/tc-arm.c \
     ../../../../src/binutils-2.27/gas/config/tc-arm.h \
     ../../../../src/binutils-2.27/gas/config/tc-avr.c \
     ../../../../src/binutils-2.27/gas/config/tc-avr.h \
     ../../../../src/binutils-2.27/gas/config/tc-bfin.c \
     ../../../../src/binutils-2.27/gas/config/tc-bfin.h \
     ../../../../src/binutils-2.27/gas/config/tc-cr16.c \
     ../../../../src/binutils-2.27/gas/config/tc-cr16.h \
     ../../../../src/binutils-2.27/gas/config/tc-cris.c \
     ../../../../src/binutils-2.27/gas/config/tc-cris.h \
     ../../../../src/binutils-2.27/gas/config/tc-crx.c \
     ../../../../src/binutils-2.27/gas/config/tc-crx.h \
     ../../../../src/binutils-2.27/gas/config/tc-d10v.c \
     ../../../../src/binutils-2.27/gas/config/tc-d10v.h \
     ../../../../src/binutils-2.27/gas/config/tc-d30v.c \
     ../../../../src/binutils-2.27/gas/config/tc-d30v.h \
     ../../../../src/binutils-2.27/gas/config/tc-dlx.c \
     ../../../../src/binutils-2.27/gas/config/tc-dlx.h \
     ../../../../src/binutils-2.27/gas/config/tc-epiphany.c \
     ../../../../src/binutils-2.27/gas/config/tc-epiphany.h \
     ../../../../src/binutils-2.27/gas/config/tc-fr30.c \
     ../../../../src/binutils-2.27/gas/config/tc-fr30.h \
     ../../../../src/binutils-2.27/gas/config/tc-frv.c \
     ../../../../src/binutils-2.27/gas/config/tc-frv.h \
     ../../../../src/binutils-2.27/gas/config/tc-ft32.c \
     ../../../../src/binutils-2.27/gas/config/tc-ft32.h \
     ../../../../src/binutils-2.27/gas/config/tc-h8300.c \
     ../../../../src/binutils-2.27/gas/config/tc-h8300.h \
     ../../../../src/binutils-2.27/gas/config/tc-hppa.c \
     ../../../../src/binutils-2.27/gas/config/tc-hppa.h \
     ../../../../src/binutils-2.27/gas/config/tc-i370.c \
     ../../../../src/binutils-2.27/gas/config/tc-i370.h \
     ../../../../src/binutils-2.27/gas/config/tc-i386.c \
     ../../../../src/binutils-2.27/gas/config/tc-i386.h \
     ../../../../src/binutils-2.27/gas/config/tc-i860.c \
     ../../../../src/binutils-2.27/gas/config/tc-i860.h \
     ../../../../src/binutils-2.27/gas/config/tc-i960.c \
     ../../../../src/binutils-2.27/gas/config/tc-i960.h \
     ../../../../src/binutils-2.27/gas/config/tc-ia64.c \
     ../../../../src/binutils-2.27/gas/config/tc-ia64.h \
     ../../../../src/binutils-2.27/gas/config/tc-ip2k.c \
     ../../../../src/binutils-2.27/gas/config/tc-ip2k.h \
     ../../../../src/binutils-2.27/gas/config/tc-iq2000.c \
     ../../../../src/binutils-2.27/gas/config/tc-iq2000.h \
     ../../../../src/binutils-2.27/gas/config/tc-lm32.c \
     ../../../../src/binutils-2.27/gas/config/tc-lm32.h \
     ../../../../src/binutils-2.27/gas/config/tc-m32c.c \
     ../../../../src/binutils-2.27/gas/config/tc-m32c.h \
     ../../../../src/binutils-2.27/gas/config/tc-m32r.c \
     ../../../../src/binutils-2.27/gas/config/tc-m32r.h \
     ../../../../src/binutils-2.27/gas/config/tc-m68hc11.c \
     ../../../../src/binutils-2.27/gas/config/tc-m68hc11.h \
     ../../../../src/binutils-2.27/gas/config/tc-m68k.c \
     ../../../../src/binutils-2.27/gas/config/tc-m68k.h \
     ../../../../src/binutils-2.27/gas/config/tc-mcore.c \
     ../../../../src/binutils-2.27/gas/config/tc-mcore.h \
     ../../../../src/binutils-2.27/gas/config/tc-mep.c \
     ../../../../src/binutils-2.27/gas/config/tc-mep.h \
     ../../../../src/binutils-2.27/gas/config/tc-metag.c \
     ../../../../src/binutils-2.27/gas/config/tc-metag.h \
     ../../../../src/binutils-2.27/gas/config/tc-microblaze.c \
     ../../../../src/binutils-2.27/gas/config/tc-microblaze.h \
     ../../../../src/binutils-2.27/gas/config/tc-mips.c \
     ../../../../src/binutils-2.27/gas/config/tc-mips.h \
     ../../../../src/binutils-2.27/gas/config/tc-mmix.c \
     ../../../../src/binutils-2.27/gas/config/tc-mmix.h \
     ../../../../src/binutils-2.27/gas/config/tc-mn10200.c \
     ../../../../src/binutils-2.27/gas/config/tc-mn10200.h \
     ../../../../src/binutils-2.27/gas/config/tc-mn10300.c \
     ../../../../src/binutils-2.27/gas/config/tc-mn10300.h \
     ../../../../src/binutils-2.27/gas/config/tc-moxie.c \
     ../../../../src/binutils-2.27/gas/config/tc-msp430.c \
     ../../../../src/binutils-2.27/gas/config/tc-msp430.h \
     ../../../../src/binutils-2.27/gas/config/tc-mt.c \
     ../../../../src/binutils-2.27/gas/config/tc-mt.h \
     ../../../../src/binutils-2.27/gas/config/tc-nds32.c \
     ../../../../src/binutils-2.27/gas/config/tc-nds32.h \
     ../../../../src/binutils-2.27/gas/config/tc-nios2.c \
     ../../../../src/binutils-2.27/gas/config/tc-nios2.h \
     ../../../../src/binutils-2.27/gas/config/tc-ns32k.c \
     ../../../../src/binutils-2.27/gas/config/tc-ns32k.h \
     ../../../../src/binutils-2.27/gas/config/tc-or1k.c \
     ../../../../src/binutils-2.27/gas/config/tc-or1k.h \
     ../../../../src/binutils-2.27/gas/config/tc-pdp11.c \
     ../../../../src/binutils-2.27/gas/config/tc-pdp11.h \
     ../../../../src/binutils-2.27/gas/config/tc-pj.c \
     ../../../../src/binutils-2.27/gas/config/tc-pj.h \
     ../../../../src/binutils-2.27/gas/config/tc-ppc.c \
     ../../../../src/binutils-2.27/gas/config/tc-ppc.h \
     ../../../../src/binutils-2.27/gas/config/tc-rl78.c \
     ../../../../src/binutils-2.27/gas/config/tc-rl78.h \
     ../../../../src/binutils-2.27/gas/config/tc-rx.c \
     ../../../../src/binutils-2.27/gas/config/tc-rx.h \
     ../../../../src/binutils-2.27/gas/config/tc-s390.c \
     ../../../../src/binutils-2.27/gas/config/tc-s390.h \
     ../../../../src/binutils-2.27/gas/config/tc-score.c \
     ../../../../src/binutils-2.27/gas/config/tc-score.h \
     ../../../../src/binutils-2.27/gas/config/tc-sh.c \
     ../../../../src/binutils-2.27/gas/config/tc-sh.h \
     ../../../../src/binutils-2.27/gas/config/tc-sh64.c \
     ../../../../src/binutils-2.27/gas/config/tc-sh64.h \
     ../../../../src/binutils-2.27/gas/config/tc-sparc.c \
     ../../../../src/binutils-2.27/gas/config/tc-sparc.h \
     ../../../../src/binutils-2.27/gas/config/tc-spu.c \
     ../../../../src/binutils-2.27/gas/config/tc-spu.h \
     ../../../../src/binutils-2.27/gas/config/tc-tic30.c \
     ../../../../src/binutils-2.27/gas/config/tc-tic30.h \
     ../../../../src/binutils-2.27/gas/config/tc-tic4x.c \
     ../../../../src/binutils-2.27/gas/config/tc-tic4x.h \
     ../../../../src/binutils-2.27/gas/config/tc-tic54x.c \
     ../../../../src/binutils-2.27/gas/config/tc-tic54x.h \
     ../../../../src/binutils-2.27/gas/config/tc-tic6x.c \
     ../../../../src/binutils-2.27/gas/config/tc-tic6x.h \
     ../../../../src/binutils-2.27/gas/config/tc-tilegx.c \
     ../../../../src/binutils-2.27/gas/config/tc-tilegx.h \
     ../../../../src/binutils-2.27/gas/config/tc-tilepro.c \
     ../../../../src/binutils-2.27/gas/config/tc-tilepro.h \
     ../../../../src/binutils-2.27/gas/config/tc-v850.c \
     ../../../../src/binutils-2.27/gas/config/tc-v850.h \
     ../../../../src/binutils-2.27/gas/config/tc-vax.c \
     ../../../../src/binutils-2.27/gas/config/tc-vax.h \
     ../../../../src/binutils-2.27/gas/config/tc-visium.c \
     ../../../../src/binutils-2.27/gas/config/tc-visium.h \
     ../../../../src/binutils-2.27/gas/config/tc-xc16x.c \
     ../../../../src/binutils-2.27/gas/config/tc-xc16x.h \
     ../../../../src/binutils-2.27/gas/config/tc-xgate.c \
     ../../../../src/binutils-2.27/gas/config/tc-xgate.h \
     ../../../../src/binutils-2.27/gas/config/tc-xstormy16.c \
     ../../../../src/binutils-2.27/gas/config/tc-xstormy16.h \
     ../../../../src/binutils-2.27/gas/config/tc-xtensa.c \
     ../../../../src/binutils-2.27/gas/config/tc-xtensa.h \
     ../../../../src/binutils-2.27/gas/config/tc-z80.c \
     ../../../../src/binutils-2.27/gas/config/tc-z80.h \
     ../../../../src/binutils-2.27/gas/config/tc-z8k.c \
     ../../../../src/binutils-2.27/gas/config/tc-z8k.h \
     ../../../../src/binutils-2.27/gas/config/te-386bsd.h \
     ../../../../src/binutils-2.27/gas/config/te-aix5.h \
     ../../../../src/binutils-2.27/gas/config/te-armeabi.h \
     ../../../../src/binutils-2.27/gas/config/te-armfbsdeabi.h \
     ../../../../src/binutils-2.27/gas/config/te-armfbsdvfp.h \
     ../../../../src/binutils-2.27/gas/config/te-armlinuxeabi.h \
     ../../../../src/binutils-2.27/gas/config/te-dynix.h \
     ../../../../src/binutils-2.27/gas/config/te-epoc-pe.h \
     ../../../../src/binutils-2.27/gas/config/te-freebsd.h \
     ../../../../src/binutils-2.27/gas/config/te-generic.h \
     ../../../../src/binutils-2.27/gas/config/te-gnu.h \
     ../../../../src/binutils-2.27/gas/config/te-go32.h \
     ../../../../src/binutils-2.27/gas/config/te-hppa.h \
     ../../../../src/binutils-2.27/gas/config/te-hppa64.h \
     ../../../../src/binutils-2.27/gas/config/te-hppalinux64.h \
     ../../../../src/binutils-2.27/gas/config/te-i386aix.h \
     ../../../../src/binutils-2.27/gas/config/te-ia64aix.h \
     ../../../../src/binutils-2.27/gas/config/te-interix.h \
     ../../../../src/binutils-2.27/gas/config/te-lynx.h \
     ../../../../src/binutils-2.27/gas/config/te-mach.h \
     ../../../../src/binutils-2.27/gas/config/te-macos.h \
     ../../../../src/binutils-2.27/gas/config/te-nbsd.h \
     ../../../../src/binutils-2.27/gas/config/te-nbsd532.h \
     ../../../../src/binutils-2.27/gas/config/te-netware.h \
     ../../../../src/binutils-2.27/gas/config/te-pc532mach.h \
     ../../../../src/binutils-2.27/gas/config/te-pe.h \
     ../../../../src/binutils-2.27/gas/config/te-psos.h \
     ../../../../src/binutils-2.27/gas/config/te-riscix.h \
     ../../../../src/binutils-2.27/gas/config/te-solaris.h \
     ../../../../src/binutils-2.27/gas/config/te-sparcaout.h \
     ../../../../src/binutils-2.27/gas/config/te-sun3.h \
     ../../../../src/binutils-2.27/gas/config/te-svr4.h \
     ../../../../src/binutils-2.27/gas/config/te-symbian.h \
     ../../../../src/binutils-2.27/gas/config/te-tmips.h \
     ../../../../src/binutils-2.27/gas/config/te-vms.c \
     ../../../../src/binutils-2.27/gas/config/te-vxworks.h \
     ../../../../src/binutils-2.27/gas/config/te-wince-pe.h \
     ../../../../src/binutils-2.27/gas/config/xtensa-relax.c \
     ../../../../src/binutils-2.27/gas/config/xtensa-relax.h \
     ../../../../src/binutils-2.27/gas/depend.c \
     ../../../../src/binutils-2.27/gas/dw2gencfi.c \
     ../../../../src/binutils-2.27/gas/dw2gencfi.h \
     ../../../../src/binutils-2.27/gas/dwarf2dbg.c \
     ../../../../src/binutils-2.27/gas/dwarf2dbg.h \
     ../../../../src/binutils-2.27/gas/ecoff.c \
     ../../../../src/binutils-2.27/gas/ecoff.h \
     ../../../../src/binutils-2.27/gas/ehopt.c \
     ../../../../src/binutils-2.27/gas/emul-target.h \
     ../../../../src/binutils-2.27/gas/emul.h \
     ../../../../src/binutils-2.27/gas/expr.c \
     ../../../../src/binutils-2.27/gas/expr.h \
     ../../../../src/binutils-2.27/gas/flonum-copy.c \
     ../../../../src/binutils-2.27/gas/flonum-konst.c \
     ../../../../src/binutils-2.27/gas/flonum-mult.c \
     ../../../../src/binutils-2.27/gas/flonum.h \
     ../../../../src/binutils-2.27/gas/frags.c \
     ../../../../src/binutils-2.27/gas/frags.h \
     ../../../../src/binutils-2.27/gas/hash.c \
     ../../../../src/binutils-2.27/gas/hash.h \
     ../../../../src/binutils-2.27/gas/input-file.c \
     ../../../../src/binutils-2.27/gas/input-file.h \
     ../../../../src/binutils-2.27/gas/input-scrub.c \
     ../../../../src/binutils-2.27/gas/itbl-lex.h \
     ../../../../src/binutils-2.27/gas/itbl-ops.c \
     ../../../../src/binutils-2.27/gas/itbl-ops.h \
     ../../../../src/binutils-2.27/gas/listing.c \
     ../../../../src/binutils-2.27/gas/listing.h \
     ../../../../src/binutils-2.27/gas/literal.c \
     ../../../../src/binutils-2.27/gas/macro.c \
     ../../../../src/binutils-2.27/gas/macro.h \
     ../../../../src/binutils-2.27/gas/messages.c \
     ../../../../src/binutils-2.27/gas/obj.h \
     ../../../../src/binutils-2.27/gas/output-file.c \
     ../../../../src/binutils-2.27/gas/output-file.h \
     ../../../../src/binutils-2.27/gas/read.c \
     ../../../../src/binutils-2.27/gas/read.h \
     ../../../../src/binutils-2.27/gas/remap.c \
     ../../../../src/binutils-2.27/gas/sb.c \
     ../../../../src/binutils-2.27/gas/sb.h \
     ../../../../src/binutils-2.27/gas/stabs.c \
     ../../../../src/binutils-2.27/gas/struc-symbol.h \
     ../../../../src/binutils-2.27/gas/subsegs.c \
     ../../../../src/binutils-2.27/gas/subsegs.h \
     ../../../../src/binutils-2.27/gas/symbols.c \
     ../../../../src/binutils-2.27/gas/symbols.h \
     ../../../../src/binutils-2.27/gas/tc.h \
     ../../../../src/binutils-2.27/gas/write.c \
     ../../../../src/binutils-2.27/gas/write.h

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

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/POTFILES.in
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
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

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

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
