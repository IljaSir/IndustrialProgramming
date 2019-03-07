.PHONY: all mkdir test

BUILD = $(PWD)/build
SRC = $(PWD)/src

all:
	make mkdir
	gcc fissbuss/solution.c
mkdir:
	test -d build || mkdir build/
test:
	echo "kek"
