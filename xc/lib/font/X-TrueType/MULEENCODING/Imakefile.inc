XCOMM $XFree86: xc/lib/font/X-TrueType/MULEENCODING/Imakefile.inc,v 1.1 1999/03/28 15:32:03 dawes Exp $

#define ModuleName MULEENCODING
MODULENAME = ModuleName
MODULESRCDIR= $(XTTSOURCEDIR)/$(MODULENAME)

SRCS =	main.c MULELAOtoUCS2.c ASCIILAOtoUCS2.c
OBJS =	main.o MULELAOtoUCS2.o ASCIILAOtoUCS2.o

LinkSourceFile(main.c,$(MODULESRCDIR))
LinkSourceFile(MULELAOtoUCS2.c,$(MODULESRCDIR))
LinkSourceFile(ASCIILAOtoUCS2.c,$(MODULESRCDIR))