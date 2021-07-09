# Makefile for nasm assembly code (and corresponding C code)

SRC=src
BIN=bin

all: hello.out

hello.out: $(SRC)/hello.asm
	nasm -f elf64 -l $(BIN)/hello.lst $(SRC)/hello.asm -o $(BIN)/hello.o
	gcc -no-pie -o $(BIN)/hello $(BIN)/hello.o
	$(BIN)/hello > $(BIN)/hello.out

clean:
	rm -f $(BIN)/*
