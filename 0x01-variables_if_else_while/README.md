# 0x01. C - Variables, if, else, while

| Task | File |
| ---- | ---- |
| 0. Positive anything is better than negative nothing | [0-positive_or_negative.c](./0-positive_or_negative.c) |
| 1. The last digit | [1-last_digit.c](./1-last_digit.c) |
| 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game | [2-print_alphabet.c](./2-print_alphabet.c) |
| 3. alphABET | [3-print_alphabets.c](./3-print_alphabets.c) |
| 4. When I was having that alphabet soup, I never thought that it would pay off | [4-print_alphabt.c](./4-print_alphabt.c) |
| 5. Numbers | [5-print_numbers.c](./5-print_numbers.c) |
| 6. Numberz | [6-print_numberz.c](./6-print_numberz.c) |
| 7. Smile in the mirror | [7-print_tebahpla.c](./7-print_tebahpla.c) |
| 8. Hexadecimal | [8-print_base16.c](./8-print_base16.c) |
| 9. Patience, persistence and perspiration make an unbeatable combination for success | [9-print_comb.c](./9-print_comb.c) |
| 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need | [100-print_comb3.c](./100-print_comb3.c) |
| 11. The success combination in business is: Do what you do better... and: do more of what you do... | [101-print_comb4.c](./101-print_comb4.c) |
| 12. Software is eating the World | [102-print_comb5.c](./102-print_comb5.c) |

## Tasks
### 0. Positive anything is better than negative nothing
* A program tht assigns a random number to the variable `n` each time it is executed. Complete source code in order to print whether number stored in variable `n` is positive or negative.
	* [source code](https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c)
	* Variable `n` will store different value every time the program runs
	* The output of the program should be:
		* The number, followed by
			* if the number is greater than 0: `is positive`
			* if the number if 0: `is zero`
			* if the number is less than 0: is negative
		* followed by a new line
### 1. The last digit
* A program that assigns a random number to the variable `n` each time it is executed. Complete source code in order to print tha last digit of the number stored in the variable `n`.
	* [source code](https://github.com/alx-tools/0x01.c/blob/master/1-last_digit_c)
	* Variable `n` will store a different value every time you run this program
	* The output of the program should be:
		* The string `Last digit of, followed by
		* `n`, followed by
		* the the string `is`, followed by
			* if the last digit of `n` is greater than 5: the string `and is greater than 5`
			* if the last digit of `n` is 0: the string `and is 0`
			* if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
		* followed by a new line
### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
* A program that prints the alphabet in lowercase, followed by a new line.
	* only `putchar` is allowed and can be used only twice
### 3. alphABET
* A program that prints the alphabet in lowercase, and the in uppercase, followed by a new line.
	* Only `putchar` function is allowed and can only be used three times
### 4. When I was having that alphabet soup, I never thought that it would pay off
* A program that prints the alphabet in lowercase, followed by a new line.
	* Print all the letter except `q` and `e`
	* Only `putchar` function is allowed and can only be used twice
### 5. Numbers
* A program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
### 6. Numberz
* A program that prints all single digit numbers of base 10 starting from `0`, followed by a new line
	* Any variable of type `char` is not allowed
	* Only the `putchar` function is allowed and can be used only twice
### 7. Smile in the mirror
* A program that prints the lower alphabet in reverse, followed by a new line.
	* Only the `putchar` function is allowed and can be used only twice
### 8. Hexadecimal
* A program that prints all numbers of base 16 in lowercase, followed by a new line.
	* Only the `putchar` function is allowed and can be used only thrice
### 9. Patience, persistence and perspiration make an unbeatable combination for success
* A program that prints all possible combinations of single-digit numbers.
	* Numbers must be separated by `,`, followed by a space
	* Numbers should be printed in ascending order
	* Only the `putchar` function is allowed and can be used a maximum of four times
	* Any variable of type `char` is not allowed
### 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
* A program that prints all possible combinations of two digits.
	* Numbers must be separated by `,`, followed by a space
	* The two digits must be different
	* `01` and `10` are considered the same combination of the two digits `0` and `1`
	* Print only the smallest combination of two digits
	* Numbers should be printed in ascending order, with two digits
	* Only the `putchar` function is allowed and can be used a maximum of five times
	* Any variable of type `char` is not allowed
### 11. The success combination in business is: Do what you do better... and: do more of what you do...
* A program that prints all possible different combinations of three digits
	* Numbers must be separated by `,`, followed by a space
	* The three digits must be different
	* `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
	* Print only the smallest combination of three digits
	* Numbers should be printed in ascending order, with three digits
	* Only the `putchar` function is allowed and can be used a maximum of six times
	* Any variable of type `char` is not allowed
### 12. Software is eating the World
* A program that prints all possible combinations of two two-digit numbers.
	* The numbers should range from `0` to `99`
	* The two numbers should be separated by a space
	* All numbers should be printed with two digits. `1` should be printed as `01`
	* The combination of numbers must be separated by comma, followed by a space
	* The combinations of numbers should be printed in ascending order
	* `00 01` and `01 00` are considered as the same combination of the numbers `0` and `1`
	* Only the `putchar` function is allowed and can be used a maximum of eight times
	* Any variable of the type `char` is not allowed
