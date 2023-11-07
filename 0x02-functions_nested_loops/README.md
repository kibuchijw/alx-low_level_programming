# 0x02. C - Functions, nested loops
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
| 0. _putchar | [0-putchar.c](./0-putchar.c) |
| 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game | [1-alphabet.c](./1-alphabet.c) |
| 2. 10 x alphabet | [2-print_alphabet_x10.c](./2-print_alphabet_x10.c) |
| 3. islower | [3-islower.c](./3-islower.c) |
| 4. isalpha | [4-isalpha.c](./4-isalpha.c) |
| 5. Sign | [5-sign.c](./5-sign.c) |
| 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you | [6-abs.c](./6-abs.c) |
| 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important | [7-print_last_digit.c](./7-print_last_digit.c) |
| 8. I'm federal agent Jack Bauer, and today is the longest day of my life | [8-24_hours.c](./8-24_hours.c) |
| 9. Learn your times table | [9-times_table.c](./9-times_table.c) |
| 10. a + b | [10-add.c](./10-add.c) |
| 11. 98 Battery Street, the OG | [11-print_to_98.c](./11-print_to_98.c) |

## Tasks
### 0.\_putchar
* A program that prints `_putchar`, followed by a new line
	* Program should return `0`
### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
* A function that prints the alphabet, in lowercase, followed by a new line
	* Prototype: `void print_alphabet(void);`
	* Only `_putchar` allowed, twice
### 2. 10 x alphabet
* A function that prints 10 times the alphabet, in lowercase, followed by a new line.
	* Prototype: `void print_alphabet_x10(void);`
	* Only `_putchar` allowed, twice
### 3. islower
* A function that checks for lowercase character.
	* Prototype: `int _islower(int c);`
	* Returns `1` if `c` is lowercase
	* Returns `0` otherwise
### 4. isalpha
* A function that checks for alphabetic character
	* Prototype: `int _isalpha(int c);`
	* Returns `1` if `c` is a letter, lowercase or uppercase
	* Returns `0` otherwise
### 5. Sign
* A function that prints the sign of a number
	* Prototype: `int print_sign(int n);`
	* Returns `1` and prints `+` if `n` is greater than zero
	* Returns `0` and prints `0` if `n` is zero
	* Returns `-1` and prints `-` if `n` is less than zero
### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
* A function that computes the absolute value of an integer.
	* Prototype: `int _abs(int);`
### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
* A function that prints the last digit of a number
	* Prototype: `int print_last_digit(int);`
	* Returns the value of the last digit
### 8. I'm federal agent Jack Bauer, and today is the longest day of my life
* A function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
	* Prototype: `void jack_bauer(void);`
### 9. Learn your times table
* A function that prints the 9 times table, starting with 0
	* Prototype: `void times_table(void);`
### 10. a + b
* A function that adds two integers and returns the result
	* Prototype: `int add(int, int);`
### 11. 98 Battery Street, the OG
* A function that prints all natural numbers from `n` to `98`, followed by a new line.
	* Prototype: `void print_to_98(int n);`
	* Numbers must be separated by a comma, followed by a space
	* Numbers should be printed in order
	* The first printed number should be the number passed to your function
	* The last printed number should be `98`
	* Standard library not allowed

