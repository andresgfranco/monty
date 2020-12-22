#include "monty.h"
#include <stdbool.h>

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
	if (atoi(pushed_integer) == 0 || string_eva(pushed_integer) == 1)
	{
		if ((*pushed_integer != '0') && (pushed_integer[0] != '-'))
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
 *@line_number: line number
 * Return: void
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (head == NULL)
		printerror(4, line_number);

	else if (head->prev == NULL && head->next == NULL)
	{
		free(head);
		*stack = NULL;
	}
	else if (head->next != NULL)
	{
		*stack = head->next;
		(*stack)->prev = NULL;
		head = NULL;
		free(head);
	}
}
/**
 * op_swap - function that swaps the top two elements
 * of the stack
 *@stack: Pointer to head
 *@line_number: doubly linked list working as a stack
 * Return: void
**/
void op_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *swap = (stack_t *) malloc(sizeof(stack_t));

	if ((*stack) == NULL)
		printerror(5, line_number);
	else if ((*stack)->prev == NULL && (*stack)->next == NULL)
	{
		free(swap);
		free_stack(*stack);
		printerror(5, line_number);
	}
	else
	{
		swap->next = (*stack)->next;
		if ((swap->next)->next == NULL)
		{
			(swap->next)->prev = NULL;
			(swap->next)->next = (*stack);
			(*stack)->prev = swap->next;
			(*stack)->next = NULL;
		}
		else
		{
			(*stack)->next = (swap->next)->next;
			(*stack)->prev = swap->next;
			((*stack)->next)->prev = (*stack);
			(swap->next)->next = (*stack);
			(swap->next)->prev = NULL;
		}
		(*stack) = swap->next;
		free(swap);
	}
}
