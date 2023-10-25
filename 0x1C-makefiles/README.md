## 0x1C. C - Makefiles

| Task | File |
| ---- | ---- |
| 0. make -f 0-Makefile | [0-Makefile](./0-Makefile) |
| 1. make -f 1-Makefile | [1-Makefile](./1-Makefile) |
| 2. make -f 2-Makefile | [2-Makefile](./2-Makefile) |

## Tasks
### 0. make -f 0-Makefile
* Create the first Makefile.
* Requirements:
	* name of the executable: `school`
	* rules: `all`
		* The `all` rule builds the executable
	* variables: none
### 1. make -f 1-Makefile
* Requirements:
	* name of the executable: `school`
	* rules: `all`
		* The `all` rule builds the executable
	* variables: `CC`,`SRC`
		* `CC`: the compiler to be used
		* `SRC`: the .c files
### 2. make -f 2-Makefile
* Create the first useful Makefile
* Requirements:
	* name of the executable: `school`
	* rules: `all`
		* The `all` rule builds your executable
	* variables: `CC`, `SRC`, `OBJ`, `NAME`
		* `CC`: the compiler to be used
		* `SRC`: the `.c` files
		* `OBJ`: the `.o` files
		* `NAME`: the name of the executable
	* The `all` rule should recompile only the updated source files
	* a list of all `.o` files is not allowed
