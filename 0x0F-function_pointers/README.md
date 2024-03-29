# 0x0F. C - Function pointers
## Learning Objectives

### General

* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

| Task | File |
| ---- | ---- |
| 0. What's my name | [0-print_name.c](./0-print_name.c) |
| 1. If you spend too much time thinking about a thing, you'll never get it done | [1-array_iterator.c](./1-array_iterator.c) |
| 2. To hell with circumstances; I create opportunities | [2-int_index.c](./2-int_index.c) |
| 3. A goal is not always meant to be reached, it often serves simply as something to aim at | [3-main.c](./3-main.c), [3-op_functions.c](./3-op_functions.c), [3-get_op_func.c](./3-get_op_func.c), [3-calc.h](./3-calc.h) |
| 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker | [100-main_opcodes.c](./100-main_opcodes.c) |

## Tasks
### 0. What's my name
* A function that prints a name.
	* Prototype: `void print_name(char *name, void (*f)(char *));`
### 1. If you spend too much time thinking about a thing, you'll never get it done
* A function that executes a function given as a parameter on each element of an array.
	* Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
	* Where `size` is the size of the array
	* and `action` is a pointer to the function you need to use
### 2. To hell with circumstances; I create opportunities
* A function that searches for an integer.
	* Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
	* Where `size` is the number of elements in the array `array`
	* `cmp` is a pointer to the function to be used to compare values
	* `int_index` returns the index of the first element for which the `cmp` function does not return `0`
	* If not element matches, return `-1`
	* If size <= `0`, return `-1`
### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
* A program that performs simple operations.
	* Standard library allowed
	* Usage: `calc num1 operator num2`
	* You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to `int`
	* `operator` is one of the following:
		* `+`: addition
		* `-`: subtraction
		* `*`: multiplication
		* `/`: division
		* `&`: modulo
	* The program prints the result of the operation, followed by a new line
	* You can assume that the result of all operations can be stored in an `int`
	* If the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status `98`
	* If the `operator` is none of the above, print `Error`, followed by a new line, and exit with the status `99`
	* If the user tries to divide (`/` or `%`) by `0`, print `Error`, followed by a new line, and exit with the status `100`
#### 3-calc.h
* Contains all function prototypes and data structures used by the program
#### 3-op_functions.c
* Should contain the following functions:
	* `op_add`: returns the sum of `a` and `b`. Prototype: `int op_add(int a, int b);`
	* `op_sub`: returns the difference of `a` and `b`. Prototype: `int op_sub(int a, int b);`
	* `op_mul`: returns the product of `a` and `b`. Prototype: `int op_mul(int a, int b);`
	* `op_div`: returns the result of the division of `a` by `b`. Prototype: `int op_div(int a, int b);`
	* `op_mod`: returns the remainder of the division of `a` by `b`. Prototype: `int op_mod(int a, int b);`
#### 3-get_op_func.c
* A function that selects the correct function to perform the operation asked by the user. You're not allowed to declare any other function.
	* Prototype: `int (*get_op_func(char *s))(int, int);`
	* where `s` is the operator passed as argument to the program
	* This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: `get_op_func("+")` should return a pointer to the function `op_add`
	* You are not allowed to use `switch` statements
	* You are not allowed to use `for` or `do ... while` loops
	* You are not allowed to use `goto`
	* You are not allowed to use `else`
	* You are not allowed to use more than one `if` statement in the code
	* You are not allowed to use more than one `while` loop in the code
	* If `s` does not match any of the 5 expected operators(`+`, `-`, `*`, `/`, `%`), return `NULL`
#### 3-main.c
* File should contain the `main` function only
	* You are not allowed to code any other function than `main` in this file
	* You are not allowed to directly call `op_add`, `op_sub`, `op_mul`, `op_div` or `op_mod` from the `main` function
	* You have to use `atoi` to convert arguments to `int`
	* You are not allowed to use any kind of loop
	* You are allowed to use a maximum of 3 `if` statements
### 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
* A program that print the [opcodes](https://en.wikipedia.org/wiki/Opcode) of its own main function.
	* Usage: `./main number_of_bytes`
	* Output format:
		* the opcodes should be printed in hexadecimal, lowercase
		* each opcode is two char long
		* listing ends with a new line
	* You are allowed to use `printf` and `atoi`
	* You have to use `atoi` to convert the argument to an `int`
	* If the number of argument(s) is not the correct one, print Error, followed by a new line, and exit with the status `1`
	* If the number of bytes is negative, print `Error`, followed by a new line, and exit with the status `2`
	* You do not have to compile with any flags
