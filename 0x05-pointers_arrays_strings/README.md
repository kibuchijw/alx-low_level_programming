# 0x05. C - Pointers, arrays and strings
## Learning Objectives

### General

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

| Task | File |
| ---- | ---- |
| 0. 98 Battery st. | [0-reset_to_98.c](./0-reset_to_98.c) |
| 1. Don't swap horses in crossing a stream | [1-swap.c](./1-swap.c) |
| 2. This report, by its very length, defends itself against the risk of being read | [2-strlen.c](./2-strlen.c) |
| 3. I do not fear computers. I fear the lack of them | [3-puts.c](./3-puts.c) |
| 4. I can only go one way. I've not got a reverse gear | [4-print_rev.c](./4-print_rev.c) |
| 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes | [5-rev_string.c](./5-rev_string.c) |
| 6. Half the lies they tell about me aren't true | [6-puts2.c](./6-puts2.c) |
| 7. Winning is only half of it. Having fun is the other half | [7-puts_half.c](./7-puts_half.c) |
| 8. Arrays are not pointers | [8-print_array.c](./8-print_array.c) |
| 9. strcpy | [9-strcpy.c](./9-strcpy.c) |

## Tasks
### 0. 98 Battery st.
* A function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.
	* Prototype: `void reset_to_98(int *n);`
### 1. Don't swap horses in crossing a stream
* A function that swaps the values of two integers.
	* Prototype: `void swap_int(int *a, int *b);`
### 2. This report, by its very length, defends itself against the risk of being read
* A function that returns the length of a string.
	* Prototype: `int _strlen(char *s);`
### 3. I do not fear computers. I fear the lack of them
* A function that prints a string, followed by a new line, to `stdout`.
	* Prototype: `void _puts(char *str);`
### 4. I can only go one way. I've not got a reverse gear
* A function that prints a string, in reverse, followed by a new line.
	* Prototype: `void print_rev(char *s);`
### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
* A function that reverses a string.
	* Prototype: `void rev_string(char *s);`
### 6. Half the lies they tell about me aren't true
* A function that prints every other character of a string, starting with the first character, followed by a new line.
	* Prototype: `void puts2(char *str);`
### 7. Winning is only half of it. Having fun is the other half
* A function that prints half of a string, followed by a new line.
	* Prototype: `void puts_half(char *str);`
	* The function should print the second half of the string
	* If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`
### 8. Arrays are not pointers
* A function that prints `n` elements of an array of integers, followed by a new line.
	* Prototype: `void print_array(int *a, int n);`
	* Where `n` is the number of elements of the array to be printed
	* Numbers must be separated by comma, followed by a space
	* The numbers should be displayed in the same order as they are stored in the array
	* `printf` allowed
### 9. strcpy
* A function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
	* Prototype: `char *_strcpy(char *dest, char *src);`
	* Return value: the pointer to `dest`
