# 0x08. C - Recursion
## Learning Objectives

### General

* What is recursion
* How to implement recursion
* In what situations you should implement recursion
* In what situations you shouldn’t implement recursion

| Task | File |
| ---- | ---- |
| 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget | [0-puts_recursion.c](./0-puts_recursion.c) |
| 1. Why is it so important to dream? Because, in my dreams we are together | [1-print_rev_recursion.c](./1-print_rev_recursion.c) |
| 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange | [2-strlen_recursion.c](./2-strlen_recursion.c) |
| 3. You mustn't be afraid to dream a little bigger, darling | [3-factorial.c](./3-factorial.c) |
| 4. Once an idea has taken hold of the brain it's almost impossible to eradicate | [4-pow_recursion.c](./4-pow_recursion.c) |
| 5. Your subconscious is looking for the dreamer | [5-sqrt_recursion.c](./5-sqrt_recursion.c) |
| 6. Inception. Is it possible? | [6-is_prime_number.c](./6-is_prime_number.c) |
| 7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything | [100-is_palindrome.c](./100-is_palindrome.c) |
| 8. Inception. Now, before you bother telling me it's impossible... | [101-wildcmp.c](./101-wildcmp.c) |

## Tasks
### 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
* A function that prints a string, followed by a new line.
	* Prototype: `void _puts_recursion(char *s);`
### 1. Why is it so important to dream? Because, in my dreams we are together
* A function that prints a string in reverse.
	* Prototype: `void _print_rev_recursion(char *s);`
### 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
* A function that returns the length of a string.
	* Prototype: `int _strlen_recursion(char *s);`
### 3. You mustn't be afraid to dream a little bigger, darling
* A function that returns the factorial of a given number.
	* Prototype: `int factorial(int n);`
	* If `n` is lower than `0`, the function should return `-1` to indicate an error
	* Factorial of `0` is `1`
### 4. Once an idea has taken hold of the brain it's almost impossible to eradicate
* A function that returns the value of `x` raised to the power of `y`.
	* Prototype: `int _pow_recursion(int x, int y);`
	* If `y` is lower than `0`, the function should return `-1`
### 5. Your subconscious is looking for the dreamer
* A function that returns the natural square root of a number.
	* Prototype: `int _sqrt_recursion(int n);`
	* If `n` does not have a natural square root, the function should return `-1`
### 6. Inception. Is it possible?
* A function that returns `1` is the input integer is a [prime number](https://en.wikipedia.org/wiki/Prime_number), otherwise return `0`.
	* Prototype: `int is_prime_number(int n);`
### 7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything
* A function that returns `1` if a string is a palindrome and `0` if not.
	* Prototype: `int is_palindrome(char *s);`
	* An empty string is a palindrome
### 8. Inception. Now, before you bother telling me it's impossible...
* A function that compares two strings and returns `1` if the strings can be considered identical, otherwise return `0`.
	* Prototype: `int wildcmp(char *s1, char *s2);`
	* `s2` can contain the special character `*`.
	* The special char `*` can replace any string(including an empty string)
