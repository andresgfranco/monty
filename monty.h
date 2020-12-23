#ifndef MONTY_H
#define MONTY_H

/**Libraries**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;



/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**Function pointer that will evaluate opcode**/
void op_eva(char *given_opcode, stack_t **stack, unsigned int line_number);

/**Function that will find a character different from a number**/
int string_eva(char *pushed_integer);

/**opcodes functions**/
void op_push(stack_t **stack, unsigned int line_number);
void op_pall(stack_t **stack, unsigned int line_number);
void op_pint(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);
void op_nop(stack_t **stack, unsigned int line_number);
void op_sub(stack_t **stack, unsigned int line_number);
void op_div(stack_t **stack, unsigned int line_number);
void op_mul(stack_t **stack, unsigned int line_number);
void op_mod(stack_t **stack, unsigned int line_number);
void op_hashtag(stack_t **stack, unsigned int line_number);
void op_pchar(stack_t **stack, unsigned int line_number);

/**DELIM**/
#define DELIM " \n\t\r"

/**Global variable pushed integer**/
char *pushed_integer;

/**Error management function**/
void printerror(int error, unsigned int line_number);
void printerror1(int error, unsigned int line_number);

/** free stack */
void free_stack(stack_t *head);


#endif /* MONTY_H */
