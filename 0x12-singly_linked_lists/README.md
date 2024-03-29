# 0x12. C - Singly linked lists

## Learning Objectives

### General

* When and why using linked lists vs arrays
* How to build and use linked lists

| Task | File |
| ---- | ---- |
| 0. Print list | [0-print_list.c](./0-print_list.c) |
| 1. List length | [1-list_len.c](./1-list_len.c) |
| 2. Add node | [2-add_node.c](./2-add_node.c) |
| 3. Add node at the end | [3-add_node_end.c](./3-add_node_end.c) |
| 4. Free list | [4-free_list.c](./4-free_list.c) |
| 5. The Hare and the Tortoise | [100-first.c](./100-first.c) |
| 6. Real programmers can write assembly code in any language | [101-hello_holberton.asm](./101-hello_holberton.asm) |

## Tasks
### 0. Print list
* A function that prints all the elements of a `list_t` list.
	* Prototype: `size_t print_list(const list_t *h);`
	* Return: the number of nodes
	* If `str` is `NULL`, print `[0] (nil)`
	* You are allowed to use `printf`
### 1. List length
* A function that returns the number of elements in a linked `list_t` list.
	* Prototype: `size_t list_len(const list_t *h);`
### 2. Add node
* A function that adds a new node at the beginning of a `list_t` list.
	* Prototype: `list_t *add_node(list_t **head, const char *str);`
	* Return: the address of the new element, or `NULL` if it failed
	* `str` needs to be duplicated
	* You are allowed to use `strdup`
### 3. Add node at the end
* A function that adds a new node at the end of a `list_t` list.
	* Prototype: `list_t *add_node_end(list_t **head, const char *str);`
	* Return: the address of the new element, or `NULL` if it failed
	* `str` needs to be duplicated
	* You are allowed to use `strdup`
### 4. Free list
* A function that frees a `list_t` list.
	* Prototype: `void free_list(list_t *head);`
### 5. The Hare and the Tortoise
* A function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.
	* You are allowed to use the `printf` function
### 6. Real programmers can write assembly code in any language
* A 64-bit program in assembly that prints `Hello, Holberton`, followed by a new line.
	* You are only allowed to use the `printf` function
	* You are not allowed to use interrupts
	* The program will be compiled using `nasm` and `gcc`:
