#include "monty.h"
/**
* op_mod - function that mod the top two elements
* of the stack
*@stack: Pointer to head
*@line_number: doubly linked list working as a stack
* Return: void
**/

void op_mod(stack_t **stack, unsigned int line_number)
{
int a, b, c;

	if ((*stack) == NULL)
		printerror1(11, line_number);
	else if ((*stack)->prev == NULL && (*stack)->next == NULL)
	{
		free_stack(*stack);
		printerror1(11, line_number);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;

	if (a == 0)
	printerror1(9, line_number);
	c = b % a;
	op_pop(stack, line_number);
	(*stack)->n = c;
}
/**
* op_hashtag - function that does nothing
*@stack: Pointer to head
*@line_number: doubly linked list working as a stack
* Return: void
**/
void op_hashtag(stack_t **stack, unsigned int line_number)
{
	return;
	(void)line_number;
	(void)**stack;
}
/**
 * op_pchar - prints the char at the top of the stack,
 * followed by a new line.
 * @stack: doubly linked list working as a stack
 * @line_number: line number of the specified opcode
 * Return: void
**/
void op_pchar(stack_t **stack, unsigned int line_number)
{
	int character = (*stack)->n;

	if ((*stack) == NULL)
	{
		free_stack(*stack);
		printerror(13, line_number);
	}
	if (character < 0 && character > 127)
	{
		free_stack(*stack);
		printerror(12, line_number);
	}
	printf("%c\n", (*stack)->n);
}
