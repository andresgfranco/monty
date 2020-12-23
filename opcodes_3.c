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
		printerror(8, line_number);
	else if ((*stack)->prev == NULL && (*stack)->next == NULL)
	{
		free_stack(*stack);
		printerror(8, line_number);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;

	if (a == 0)
	printerror1(9, line_number);
	c = b % a;
	op_pop(stack, line_number);
	(*stack)->n = c;
}

