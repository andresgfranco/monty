#include "monty.h"

/**
 * op_push - Function that pushes an element
 * to the stack
 * @stack: doubly linked list working as a stack
 * @line_number: line number of the specified opcode
 * Return: void
**/
void op_push(stack_t **stack, unsigned int line_number)
{

	stack_t *top_stack = (stack_t *) malloc(sizeof(stack_t));

	if (top_stack == NULL)
		printerror(1, line_number);

	if ((atoi(pushed_integer) == 0))
	{
		if (*pushed_integer != '0')
		{
			printerror(2, line_number);
		}
	}

	top_stack->n = atoi(pushed_integer);
	top_stack->next = (*stack);
	top_stack->prev = NULL;

	if ((*stack) != NULL)
		(*stack)->prev = top_stack;
	(*stack) = top_stack;

}
/**
* op_pall - Function that prints all the elements
* of a list
* @stack: doubly linked list working as a stack
* @line_number: line number of the specified opcode
* Return: number of nodes of type size_t
**/
void op_pall(stack_t **stack, unsigned int line_number)
{

stack_t *aux = *stack;

while ((aux) != NULL)
{
printf("%d\n", (aux)->n);
(aux) = (aux)->next;
}
(void)line_number;
}
