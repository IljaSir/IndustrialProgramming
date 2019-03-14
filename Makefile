.PHONY: all mkdir test

BUILD = $(PWD)/build
SRC = $(PWD)/src

all:
	make mkdir
	gcc fizzbuzz/solution.c fizzbuzz/test.c -o $(BUILD)/test
mkdir:
	test -d build || mkdir build/
test:
	./$(BUILD)/test
