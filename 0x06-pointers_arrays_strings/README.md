# 0x06. C - More pointers, arrays and strings
## Learning Objectives

### General

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

| Task | File |
| ---- | ---- |
| 0. strcat | [0-strcat.c](./0-strcat.c) |
| 1. strncat | [1-strncat.c](./1-strncat.c) |
| 2. strncpy | [2-strncpy.c](./2-strncpy.c) |
| 3. strcmp | [3-strcmp.c](./3-strcmp.c) |

## Tasks
### 0. strcat
* A function that concatenates two strings.
	* Prototype: `char *_strcat(char *dest, char *src);`
	* This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
	* Returns a pointer to the resulting string `dest`
### 1. strncat
* A function that concatenates two strings.
	* Prototype: `char *_strncat(char *dest, char *src, int n);`
	* The `_strncat` function is similar to the `_strcat` function, except that
		* It will use at most `n` bytes from `src`; and
		* `src` does not need to be null-terminated if it contains `n` or more bytes
	* Return a pointer to the resulting string `dest`
### 2. strncpy
* A function that copies a string.
	* Prototype: `char *_strncpy(char *dest, char *src, int n);`
	* The function should work exactly like `strncpy`
### 3. strcmp
* A function that compares two strings.
	* Prototype: `int _strcmp(char *s1, char *s2);`
	* The function should work exactly like `strcmp`
