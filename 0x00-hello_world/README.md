# Project: 0x00. C - Hello, World

## Tasks

| Task | File |
| ---- | ---- |
| 0. Preprocessor | [0-preprocessor](./0-preprocessor) |
| 1. Compiler | [1-compiler](./1-compiler) |
| 2. Assembler | [2-assembler](./2-assembler) |
| 3. Name | [3-name](./3-name) |
| 4. Hello, puts | [4-puts.c](./4-puts.c) |
| 5. Hello, printf | [5-printf.c](./5-printf.c) |
| 6. Size is not grandeur, and territory does not make a nation | [6-size.c](./6-size.c) |

## Requirements
### 0. Preprocessor
* Script that runs a C file throught the preprocessor and saves the result into another file.
	* The C file name is saved in the variable `$CFILE`
	* The output should be saved in the file `c`
### 1. Compiler
* Script that compiles a C file but does not link.
	* The C file name is saved in the variable `CFILE`
	* The output file should be named the same as the C file, but with the extension `.o` instead of `.c`
		* Example: if the C file is `main.c` output should be `main.o`
### 2. Assembler
* Script that generates the assembly code of a C code and saves it in an output file
	* The C file name is saved in the variable `$CFILE`
	* The output files should be named the same as the C file, but with the extension `.s` instead of `.c`
		* Example: if the C file is `main.c`, output should be `main.s`
### 3. Name
* Script that compiles a C file and creates an executable named `cisfun`
	* The C file name will be saved in the variable $CFILE
### 4. Hello, puts
* Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
	* Use the function `puts`
### 5. Hello, printf
* Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
	* Use the function `printf`
	* Program should compile without warning when using the `-Wall` `gcc` option
### 6. Size is not grandeur, and territory does not make a nation
* Write a C program that prints the size of various types on the computer it is compiled and run on.
