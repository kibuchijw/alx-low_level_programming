# 0x09. C - Static libraries
## Learning Objectives

### General

* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of `ar`, `ranlib`, `nm`

| Task | File |
| ---- | ---- |
| 0. A library is not a luxury but one of the necessities of life | [libmy.a](./libmy.a), [main.h](./main.h) |
| 1. Without libraries what have we? We have no past and no future | [create_static_lib.sh](./create_static_lib.sh) |

## Tasks
### 0. A library is not a luxury but one of the necessities of life
* Create the static library `libmy.a` containing all the functions listed
### 1. Without libraries what have we? We have no past and no future
* Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory
