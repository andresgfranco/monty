#include "monty.h"

/**
* op_add - function that sum the top two elements
* of the stack
*@stack: Pointer to head
*@line_number: doubly linked list working as a stack
* Return: void
**/

void op_add(stack_t **stack, unsigned int line_number)
{
	int a, b, c;

	if ((*stack) == NULL)
		printerror(6, line_number);
	else if ((*stack)->prev == NULL && (*stack)->next == NULL)
	{
		free_stack(*stack);
		printerror(6, line_number);
	}


	a = (*stack)->n;
	b = (*stack)->next->n;
	c = a + b;

	op_pop(stack, line_number);

	(*stack)->n = c;
}

/**
* op_nop - function that does nothing
*@stack: Pointer to head
*@line_number: doubly linked list working as a stack
* Return: void
**/
void op_nop(stack_t **stack, unsigned int line_number)
{
	return;
	(void)line_number;
	(void)**stack;
}
