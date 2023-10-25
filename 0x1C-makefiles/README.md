## 0x1C. C - Makefiles

| Task | File |
| ---- | ---- |
| 0. make -f 0-Makefile | [0-Makefile](./0-Makefile) |
| 1. make -f 1-Makefile | [1-Makefile](./1-Makefile) |
| 2. make -f 2-Makefile | [2-Makefile](./2-Makefile) |
| 3. make -f 3-Makefile | [3-Makefile](./3-Makefile) |
| 4. A complete Makefile | [4-Makefile](./4-Makefile) |
| 5. Island Perimeter | [5-island_perimeter.py](./5-island_perimeter.py) |
| 6. make -f 100-Makefile | [100-Makefile](./100-Makefile) |

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
### 3. make -f 3-Makefile
* Requirements:
	* name of the executable:`school`
	* rules:`all`,`clean`,`oclean`,`fclean`,`re`
		* `all`: builds the executable
		* `clean`: deletes all Emacs and Vim temporary files along with the executable
		* `oclean`: deletes the object files
		* `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
		* `re`: forces recompilation of all source files
	* variables: `CC`,`SRC`,`OBJ`,`NAME`,`RM`
		* `CC`: the compiler to be used
		* `SRC`: the `.c` files
		* `OBJ`: the `.o` files
		* `NAME`: the name of the executable
		* `RM`: the program to delete files
	* The `all` rule should recompile only the updated source files
	* The `clean`, `oclean`, `fclean`, `re` rules should never fail
	* A list of the `.o` files is not allowed
### 4. A complete Makefile
* Requirements:
	* name of the executable: `school`
	* rules: `all`, `clean`, `fclean`, `oclean`, `re`
		* `all`: builds the executable
		* `clean`: deletes all Emacs and Vim temporary files along with the executable
		* `oclean`: deletes the object files
		* `fclean`: deletes all Emacs and Vim temporary files, the executable, and object files
		* `re`: forces recompilation of all source files
	* variables: `CC`,`SRC`,`OBJ`,`NAME`,`RM`,`CFLAGS`
		* `CC`: the compiler to be used
		* `SRC`: the `.c` files
		* `OBJ`: the `.o` files
		* `NAME`: the name of the executable
		* `RM`: the program to delete files
		* `CFLAGS`: you favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
	* The `all` rule should recompile only the updated source files
	* The `clean`,`oclean`,`fclean`,`re` rules should never fail
	* A list of the `.o` files is not allowed
### 5. Island Perimeter
**Technical Interview Preparation:**
* Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`:
	* `grid` is a list of list of integers:
		* 0 represents a water zone
		* 1 represents a land zone
		* One cell is a square with side lenght 1
		* Grid cells are connected horizontally/vertically(not diagonally).
		* Grid is rectangular, width and height don't exceed 100
	* Grid is completely surrounded by water, and there is one island (or nothing)
	* The island doesn't have "lakes"(water inside that isn't connected to the water around the island).
* Requirements:
	* First line contains `#!/usr/bin/python3`
	* Not allowed to import any module
	* Module and function must be documented
### 6. make -f 100-Makefile
* Requirements:
	* Same as in [4. A complete Makefile](./4-Makefile)
* The `all` rule should recompile only the updated source files
* The `clean`,`oclean`,`fclean`,`re` rules should never fail
* A list of all the `.o` files is not allowed
* `$(RM) if to by used for cleaning up rules, but setting `RM` variable is not allowed
* `$(CC) should not be used more than once
* `$(RM) shoudl only be used twice
* `$(CFLAGS) should not be used, but the compiler should still use the flags set in the variable
* The `$(OBJ)` rule is not allowed
* The `%.o: %.c` rule is not allowed
* The makefile should work even if there is a file in the folder that has the same name as one the rules
* The makefile should not compile if the header file `m.h` is missing
