# 0x10. C - Variadic functions
## Learning Objectives

### General

* What are variadic functions
* How to use `va_start`, `va_arg` and `va_end` macros
* Why and how to use the `const` type qualifier

| Task | File |
| ---- | ---- |
| 0. Beauty is variable, ugliness is constant | [0-sum_them_all.c](./0-sum_them_all.c) |
| 1. To be is to be the value of a variable | [1-print_numbers.c](./1-print_numbers.c) |
| 2. One woman's constant is another woman's variable | [2-print_strings.c](./2-print_strings.c) |

## Tasks
### 0. Beauty is variable, ugliness is constant
* A function that returns the sum of all its parameters.
	* Prototype: `int sum_them_all(const unsigned int n, ...);`
	* If `n == 0`, return `0`
### 1. To be is to be the value of a variable
* A function that prints numbers, followed by a new line.
	* Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
	* where `separator` is the string to be printed between numbers
	* and `n` is the number of integers passed to the function
	* You are allowed to use `printf`
	* If `separator` is `NULL`, don't print it
	* Print a new line at the end of your function
### 2. One woman's constant is another woman's variable
* A function that prints strings, followed by a new line.
	* Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
	* where `separator` is the string to be printed between the strings
	* and `n` is the number of strings passed to the function
	* You are allowed to use `printf`
	* If separator if `NULL`, don't print it
	* If one of the string is NULL, print `(nil)` instead
	* Print a new line at the end of the function
