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
	{
		free(top_stack);
		free_stack(*stack);
		printerror(1, line_number);
	}
	if ((atoi(pushed_integer) == 0))
	{
		if (*pushed_integer != '0')
		{
			free(top_stack);
			free_stack(*stack);
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
* Return: void
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

/**
 * op_pint - Function that prints the value at the top
 * of the stack, followed by a new line.
* @stack: doubly linked list working as a stack
* @line_number: line number of the specified opcode
 * Return: void
**/
void op_pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL)
	{
		free_stack(*stack);
		printerror(3, line_number);
	}
	printf("%d\n", (*stack)->n);
}

/**
 * op_pop - deletes the node at end
 *@stack: Pointer to head
 *@line_number: index
 * Return: void
 */
int op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (stack == NULL)
		printerror(4, line_number);

	if (head->next == NULL)
	{
		free(head);
		*head = NULL;
	}
	else
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(head);
	}
}
