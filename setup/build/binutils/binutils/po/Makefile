# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003-2016 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = binutils
VERSION = 2.27

SHELL = /bin/sh


srcdir = ../../../../src/binutils-2.27/binutils/po
top_srcdir = ../../../../src/binutils-2.27/binutils
VPATH = ../../../../src/binutils-2.27/binutils/po
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
MKINSTALLDIRS = $(top_builddir)/../../../src/binutils-2.27/binutils/../mkinstalldirs

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
POFILES =  $(srcdir)/bg.po $(srcdir)/da.po $(srcdir)/es.po $(srcdir)/fi.po $(srcdir)/fr.po $(srcdir)/id.po $(srcdir)/it.po $(srcdir)/ja.po $(srcdir)/ro.po $(srcdir)/ru.po $(srcdir)/rw.po $(srcdir)/sk.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/uk.po $(srcdir)/vi.po $(srcdir)/zh_CN.po $(srcdir)/zh_TW.po $(srcdir)/hr.po $(srcdir)/ca.po
GMOFILES =  $(srcdir)/bg.gmo $(srcdir)/da.gmo $(srcdir)/es.gmo $(srcdir)/fi.gmo $(srcdir)/fr.gmo $(srcdir)/id.gmo $(srcdir)/it.gmo $(srcdir)/ja.gmo $(srcdir)/ro.gmo $(srcdir)/ru.gmo $(srcdir)/rw.gmo $(srcdir)/sk.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/uk.gmo $(srcdir)/vi.gmo $(srcdir)/zh_CN.gmo $(srcdir)/zh_TW.gmo $(srcdir)/hr.gmo $(srcdir)/ca.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     ../../../../src/binutils-2.27/binutils/addr2line.c \
     ../../../../src/binutils-2.27/binutils/ar.c \
     ../../../../src/binutils-2.27/binutils/arsup.c \
     ../../../../src/binutils-2.27/binutils/arsup.h \
     ../../../../src/binutils-2.27/binutils/bin2c.c \
     ../../../../src/binutils-2.27/binutils/binemul.c \
     ../../../../src/binutils-2.27/binutils/binemul.h \
     ../../../../src/binutils-2.27/binutils/bucomm.c \
     ../../../../src/binutils-2.27/binutils/bucomm.h \
     ../../../../src/binutils-2.27/binutils/budbg.h \
     ../../../../src/binutils-2.27/binutils/coffdump.c \
     ../../../../src/binutils-2.27/binutils/coffgrok.c \
     ../../../../src/binutils-2.27/binutils/coffgrok.h \
     ../../../../src/binutils-2.27/binutils/cxxfilt.c \
     ../../../../src/binutils-2.27/binutils/debug.c \
     ../../../../src/binutils-2.27/binutils/debug.c \
     ../../../../src/binutils-2.27/binutils/debug.h \
     ../../../../src/binutils-2.27/binutils/dlltool.c \
     ../../../../src/binutils-2.27/binutils/dlltool.h \
     ../../../../src/binutils-2.27/binutils/dllwrap.c \
     ../../../../src/binutils-2.27/binutils/dwarf.c \
     ../../../../src/binutils-2.27/binutils/dwarf.h \
     ../../../../src/binutils-2.27/binutils/elfcomm.c \
     ../../../../src/binutils-2.27/binutils/elfcomm.h \
     ../../../../src/binutils-2.27/binutils/elfedit.c \
     ../../../../src/binutils-2.27/binutils/emul_aix.c \
     ../../../../src/binutils-2.27/binutils/emul_vanilla.c \
     ../../../../src/binutils-2.27/binutils/filemode.c \
     ../../../../src/binutils-2.27/binutils/ieee.c \
     ../../../../src/binutils-2.27/binutils/ieee.c \
     ../../../../src/binutils-2.27/binutils/is-ranlib.c \
     ../../../../src/binutils-2.27/binutils/is-strip.c \
     ../../../../src/binutils-2.27/binutils/maybe-ranlib.c \
     ../../../../src/binutils-2.27/binutils/maybe-strip.c \
     ../../../../src/binutils-2.27/binutils/mclex.c \
     ../../../../src/binutils-2.27/binutils/nlmconv.c \
     ../../../../src/binutils-2.27/binutils/nlmconv.h \
     ../../../../src/binutils-2.27/binutils/nm.c \
     ../../../../src/binutils-2.27/binutils/not-ranlib.c \
     ../../../../src/binutils-2.27/binutils/not-strip.c \
     ../../../../src/binutils-2.27/binutils/objcopy.c \
     ../../../../src/binutils-2.27/binutils/objdump.c \
     ../../../../src/binutils-2.27/binutils/objdump.h \
     ../../../../src/binutils-2.27/binutils/od-macho.c \
     ../../../../src/binutils-2.27/binutils/od-xcoff.c \
     ../../../../src/binutils-2.27/binutils/prdbg.c \
     ../../../../src/binutils-2.27/binutils/rclex.c \
     ../../../../src/binutils-2.27/binutils/rdcoff.c \
     ../../../../src/binutils-2.27/binutils/rdcoff.c \
     ../../../../src/binutils-2.27/binutils/rddbg.c \
     ../../../../src/binutils-2.27/binutils/rddbg.c \
     ../../../../src/binutils-2.27/binutils/readelf.c \
     ../../../../src/binutils-2.27/binutils/rename.c \
     ../../../../src/binutils-2.27/binutils/resbin.c \
     ../../../../src/binutils-2.27/binutils/rescoff.c \
     ../../../../src/binutils-2.27/binutils/resrc.c \
     ../../../../src/binutils-2.27/binutils/resres.c \
     ../../../../src/binutils-2.27/binutils/size.c \
     ../../../../src/binutils-2.27/binutils/srconv.c \
     ../../../../src/binutils-2.27/binutils/stabs.c \
     ../../../../src/binutils-2.27/binutils/stabs.c \
     ../../../../src/binutils-2.27/binutils/strings.c \
     ../../../../src/binutils-2.27/binutils/sysdep.h \
     ../../../../src/binutils-2.27/binutils/sysdump.c \
     ../../../../src/binutils-2.27/binutils/syslex_wrap.c \
     ../../../../src/binutils-2.27/binutils/unwind-ia64.c \
     ../../../../src/binutils-2.27/binutils/unwind-ia64.h \
     ../../../../src/binutils-2.27/binutils/version.c \
     ../../../../src/binutils-2.27/binutils/windint.h \
     ../../../../src/binutils-2.27/binutils/windmc.c \
     ../../../../src/binutils-2.27/binutils/windmc.h \
     ../../../../src/binutils-2.27/binutils/windres.c \
     ../../../../src/binutils-2.27/binutils/windres.h \
     ../../../../src/binutils-2.27/binutils/winduni.c \
     ../../../../src/binutils-2.27/binutils/winduni.h \
     ../../../../src/binutils-2.27/binutils/wrstabs.c

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
