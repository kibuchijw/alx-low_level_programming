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
