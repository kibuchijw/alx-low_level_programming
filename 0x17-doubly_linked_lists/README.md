# 0x17. C - Doubly linked lists

## Learning Objectives

### General

* What is a doubly linked list
* How to use doubly linked lists
* Understand and know how to implement the various operations (deletion, insertion, etc) with doubly linked lists

| Task | File(s) |
| ---- | ---- |
| 0. Print list | [0-print_dlistint.c](./0-print_dlistint.c) |
| 1. List length | [1-dlistint_len.c](./1-dlistint_len.c) |
| 2. Add node | [2-add_dnodeint.c](./2-add_dnodeint.c) |
| 3. Add node at the end | [3-add_dnodeint_end.c](./3-add_dnodeint_end.c) |
| 4. Free list | [4-free_dlistint.c](./4-free_dlistint.c) |
| 5. Get node at index | [5-get_dnodeint.c](./5-get_dnodeint.c) |
| 6. Sum list | [6-sum_dlistint.c](./6-sum_dlistint.c) |
| 7. Insert at index | [7-insert_dnodeint.c](./7-insert_dnodeint.c), [2-add_dnodeint.c](./2-add_dnodeint.c), [3-add_dnodeint_end.c](./3-add_dnodeint_end.c) |
| 8. Delete at index | [8-delete_dnodeint.c](./8-delete_dnodeint.c) |

## Tasks
### 0. Print list
* A functions that prints all the elements of a `dlistint_t` list.
	* Prototype: `size_t print_dlistint(const dlistint_t *h);`
	* Return: the number of nodes
### 1. List length
* A function that returns the number of elements in a linked `dlistint_t` list.
	* Prototype: `size_t dlistint_len(const dlistint_t *h);`
### 2. Add node
* A function that adds a new node at the beginning of a `dlistint_t` list.
	* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
	* Return: the address of the new element, or `NULL` if it failed
### 3. Add node at the end
* A function that adds a new node at the end of a `dlistint_t` list.
	* Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
	* Return: the address of the new element, or `NULL` if it failed
### 4. Free list
* A function that frees a `dlistint_t` list.
	* Prototype: `void free_dlistint(dlistint_t *head);`
### 5. Get node at index
* A function that returns the nth node of a `dlistint_t` linked list.
	* Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
	* where `index` is the index of the node, starting from `0`
	* if the node does not exist, return `NULL`
### 6. Sum list
* A function that returns the sum of all the data (n) of a `dlistint_t` linked list.
	* Prototype: `int sum_dlistint(dlistint_t *head);`
	* if the list is empty, return `0`
### 7. Insert at index
* A function that inserts a new node at a given position
	* Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
	* where `idx` is the index of the list where the new node should be added. Index starts at `0`
	* Returns: the address of the new node, or `NULL` if it failed
	* If it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
* files [2-add_dnodeint.c](./2-add_dnodeint.c) and [3-add_dnodeint_end.c](./3-add_dnodeint_end.c) will be compiled during the correction
### 8. Delete at index
* A function that deletes the node at index `index` of a `dlistint_t` linked list.
	* Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
	* where `index` is the index of the node that should be deleted. Index starts at `0`
	* Returns: `1` if it succeeded, `-1` if it failed
