.PHONY: all mkdir

BUILD = $(PWD)/build
SRC = $(PWD)/src

all:
	make mkdir
	gcc fissbuss/solution.c
mkdir:
	test -d build || mkdir build/
