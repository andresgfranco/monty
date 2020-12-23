# monty
In this repository you will find the entire project where we built our own version of a monty bytecode interpreter. Originally created for learning purposes in the Holberton School, Barranquilla campus - cohort 13

# How to use it
- Clone this repo into your VM or OS with https://github.com/andresgfranco/monty
- Compiler to use: `GCC version 4.8.4 (Ubuntu 4.8.4-2ubuntu1~14.04.4)`
- gcc -Wall -Werror -Wextra -pedantic *.c -o monty
- Run: `./monty [monty_type_file]`

# Files in this repository
- `README.md`
- `monty.c:` main file and function where we will receive the monty file to be interpreted and reade them line by line.
- `monty.h` unique header for the entire project containing libraries, function prototypes, macro delimitators and a unique global variable.
- `op_eva.c` file containing the two functions that will evaluate the opcodes.
- `op_codes_1.c` first set of 5 functions to interpret opcodes.
- `op_codes_2.c` second set of 5 functions to interpret opcodes.
- `op_codes_3.c` third set of 5 functions to interpret opcodes.
- `freestack.c` file containing function to free memory of the doubly linked list working as a stack.
- `_errors.c` file containing function to print errors.
- `_errors.c` second file containing function to print errors.
# Functions used in this repository
- `getline`
- `fopen`
- `fclose`
- `free`
- `malloc`
- `free`
- `fprintf`
- `printf`
## Our own functions
- `op_eva` - function that will evaluate the given opcode.
- `string_eva` - function that will find a character different from numbers and minus at string after opcode.
- `op_push` - pushes an element to the stack.
- `op_pall` - prints all the values on the stack, starting from the top of the stack.
- `op_pint`- prints the value at the top of the stack, followed by a new line.
- `op_pop` - removes the top element of the stack.
- `op_swap`- swaps the top two elements of the stack.
- `op_add` - adds the top two elements of the stack.
- `op_nop` - doesn’t do anything.
- `op_sub` - subtracts the top element of the stack from the second top element of the stack.
- `op_div` - divides the second top element of the stack by the top element of the stack.
- `op_mul` - multiplies the second top element of the stack with the top element of the stack.
- `op_mod` - computes the rest of the division of the second top element of the stack by the top element of the stack.
- `op_hashtag` - reat the line as a comment (don’t do anything).
- `op_pchar` - prints the char at the top of the stack, followed by a new line.
- `op_pstr` - prints the string starting at the top of the stack, followed by a new line
- `op_rotl` - rotate stack to the botton.
- `printerror` - prints the corresponding error.
- `printerror1` - prints the corresponding error.
- `free_stack` - frees memory.

# Authors
- Roberth Rondón - https://twitter.com/rrondonc
- Andres Gonzalez Franco - http://twitter.com/andresgfranco
### End of README.md file

