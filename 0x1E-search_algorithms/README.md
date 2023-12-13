# 0x1E. C - Search Algorithms
## Learning Objectives

### General

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

| Task | File |
| ---- | ---- |
| 0. Linear search | [0-linear.c](./0-linear.c) |
| 1. Binary search | [1-binary.c](./1-binary.c) |
| 2. Big O #0 | [2-O](./2-O) |
| 3. Big O #1 | [3-O](./3-O) |
| 4. Big O #2 | [4-O](./4-O) |

## Tasks
### 0. Linear Search
* Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)
    * Prototype: `int linear_search(int *array, size_t size, int value);`
    * Where `array` is a pointer to the first element of the array to search in
    * `size` is the number of the elements in `array`
    * And `value` is the value to search for
    * Your function must return the first index where `value` is located
    * If `value` is not present in `array` of if `array` is `NULL`, your function must return `-1`
    * Every time you compare a value in the array to the value you are searching, you have to print this value
### 1. Binary search
* A function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)
	* Prototype: `int binary_search(int *array, size_t size, int value);`
	* Where `array` is a pointer to the first element of the array to search in
	* `size` is the number of elements in `array`
	* And `value` is the value to search for
	* Your function must return the index where `value` is located
	* You can assume that `array` will be sorted in ascending order
	* You can assume that `value` won't appear more than once in `array`
	* If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
	* You must print the array being searched every time it changes.(e.g.at the beginning and when you search a subarray)
### 2. Big O #0
* What is the `time complexity` (worst case) of a linear search in an array of size `n`?
### 3. Big O #1
* What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?
### 4. Big O #2
* What is the `time complexity` (worst case) of a binary search in an array of size `n`?
