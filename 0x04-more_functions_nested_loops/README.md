# 0x04. C - More functions, more nested loops
## Learning Objectives

### General

* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the <code>gcc</code> flags <code>-Wall -Werror -pedantic -Wextra -std=gnu89</code>
* What are header files and how to to use them with <code>#include</code>

| Task | File |
| ---- | ---- |
| 0. isupper | [0-isupper.c](./0-isupper.c) |
| 1. isdigit | [1-isdigit.c](./1-isdigit.c) |
| 2. Collaboration is multiplication | [2-mul.c](./2-mul.c) |
| 3. The numbers speak for themselves | [3-print_numbers.c](./3-print_numbers.c) |
| 4. I believe in numbers and signs | [4-print_most_numbers.c](./4-print_most_numbers.c) |
| 5. Numbers constitute the only universal language | [5-more_numbers.c](./5-more_numbers.c) |
| 6. The shortest distance between two points is a straight line | [6-print_line.c](./6-print_line.c) |
| 7. I feel like I am diagonally parked in a parallel universe | [7-print_diagonal.c](./7-print_diagonal.c) |
| 8. You are so much sunshine in every square inch | [8-print_square.c](./8-print_square.c) |
| 9. Fizz-Buzz | [9-fizz_buzz.c](./9-fizz_buzz.c) |
| 10. Triangles | [10-print_triangle.c](./10-print_triangle.c) |

## Tasks
### 0. isupper
* A function that checks for uppercase character.
	* Prototype: `int _isupper(int c);`
	* Returns `1` if `c` is uppercase
	* Returns `0` otherwise
### 1. isdigit
* A function that checks for a digit (`0` through `9`).
	* Prototype: `int _isdigit(int c);`
	* Returns `1` if `c` is a digit
	* Returns `0` otherwise
### 2. Collaboration is multiplication
* A function that mutltiplies two integers
	* Prototype: `int mul(int a, int b);`
### 3. The numbers speak for themselves
* A function that prints the numbers, from `0` to `9`, followed by a new line.
	* Prototype: `void print_numbers(void);`
	* Only `_putchar` allowed, to be used twice in the code
### 4. I believe in numbers and signs
* A function that prints the numbers, from `0` to `9`, followed by a new line.
	* Prototype: `void print_most_numbers(void);`
	* Do not print `2` and `4`
	* Only `_putchar` allowed, to be used twice in the code
### 5. Numbers constitute the only universal language
* A function that prints 10 times the numbers, from `0` to `14`, followed by a new line.
	* Prototype: `void more_numbers(void);`
	* Only `_putchar` allowed, to be used twice in the code
### 6. The shortest distance between two points is a straight line
* A funtion that draws a straight line in the terminal.
	* Prototype: `void print_line(int n);`
	* Only `_putchar` allowed, to be used twice in the code
	* Where `n` is the number of times the character `_` should be printed
	* Line should end with a `\n`
	* If `n` is `0` or less, the function should only print `\n`
### 7. I feel like I am diagonally parked in a parallel universe
* A function that draws a diagonal line on the terminal.
	* Prototype: `void print_diagonal(int n);`
	* You can only use `_putchar` function to print
	* Where `n` is the number of times the character `\` should be printed
	* The diagonal should end with a `\n`
	* If `n` is `0` or less, the function should only print a `\n`
### 8. You are so much sunshine in every square inch
* A function that prints a square, followed by a new line.
	* Prototype: `void print_square(int size);`
	* You can only use `_putchar` function to print
	* Where `size` is the size of the square
	* If `size` is `0` or less, the function should print only a new line
	* Use the character `#` to print the square
### 9. Fizz-Buzz
* Write a program that prints the numbers from `1` to `100` followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`
	* Each number or word should be separated by a space
	* You are not allowed to use the standard library
### 10. Triangles
* A function that prints a triangle, followed by a new line.
	* Prototype: `void print_triangle(int size);`
	* You can only use `_putchar` function to print
	* Where `size` is the size of the triangle
	* If `size` is `0` or less, the function should print only a new line
	* Use the character `#` to print the triangle
