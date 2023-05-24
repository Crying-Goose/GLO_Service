########################################################################
#   Makefile
#   Copyright (c) soochang.
#   All right reserved.
#       Author : Changsoo-Soo Kim <soochang0812@gmail.com>
########################################################################
DIRLIST = gfmaind \ 
	gflib

all:
	$(foreach dir, $(DIRLIST), make -C $(dir) all;)

install:
	$(foreach dir, $(DIRLIST), make -C $(dir) install;)
    
clean:
	$(foreach dir, $(DIRLIST), make -C $(dir) clean;)


