########################################################################
#   Makefile
#   Copyright (c) soochang factory.
#   All right reserved.
#       Author : Changsoo-Soo Kim <soochang0812@gmail.com>
########################################################################
include $(GLOHOME)/src/

BINDIR=$(GLOHOME)/bin

ULIB    = -lnepinfo

SLIB    += -lrt -lpthread
CCFLAGS = $(DEFINE) $(UINC) $(SINC)
LIBLIST = $(ULIB) $(SLIB)

COMPILE=$(CC) $(CCFLAGS) -Wall -c -g

TARGET=nepmaind

SRCS= main.c\
        proc.c

OBJS=$(SRCS:.c=.o)

.PHONY: dep all clean

.SUFFIXES : .c .o .cc
.c.o    :
	$(COMPILE) $<
.cc.o   :
	$(COMPILE.cpp) $<

all : dep $(OBJS)
    $(CC) -o $(TARGET) $(OBJS) $(LIBLIST)

install: all
    mv $(TARGET) $(BINDIR)

clean:
	- rm -f *.o core

dep:
	gccmakedep -- $(CCFLAGS) -- $(SRCS)


