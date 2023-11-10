# 0x0E. C - Structures, typedef
## Learning Objectives

### General

* What are structures, when, why and how to use them
* How to use `typedef`

| Task | File |
| ---- | ---- |
| 0. Poppy | [dog.h](./dog.h) |
| 1. A dog is the only thing on earth that loves you more than you love yourself | [1-init_dog.c](./1-init_dog.c) |
| 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad | [2-print_dog.c](./2-print_dog.c) |
| 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read | [dog.h](./dog.h) |
| 4. A door is what a dog is perpetually on the wrong side of | [4-new_dog.c](./4-new_dog.c) |
| 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg | [5-free_dog.c](./5-free_dog.c) |

## Tasks
### 0. Poppy
* Define a new type `struct dog` with the following elements:
	* `name`, type = `char *`
	* `age`, type = `float`
	* `owner`, type = `char *`
### 1. A dog is the only thing on earth that loves you more than you love yourself
* A function that initializes a variable of type `struct_dog`
	* Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
* A function that prints a `struct dog`
	* Prototype: `void print_dog(struct dog *d);`
	* If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
	* If `d` is `NULL` print nothing.
### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
* Define a new type `dog_t` as a new name for the type `struct dog`.
### 4. A door is what a dog is perpetually on the wrong side of
* A funtion that creates a new dog.
	* Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
	* Store a copy of `name` and `owner`
	* Return `NULL` if the function fails
### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
* A function that frees dogs.
	* Prototype: `void free_dog(dog_t *d);`
