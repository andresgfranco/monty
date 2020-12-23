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
	if ((*stack) == NULL)
	{
		free_stack(*stack);
		printerror1(13, line_number);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		printerror1(12, line_number);
	}
	printf("%c\n", (*stack)->n);
}
/**
* op_pstr - Function that prints all the elements
* of a list in ASCII code
* @stack: doubly linked list working as a stack
* @line_number: line number of the specified opcode
* Return: void
**/
void op_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = *stack;

	int a = 0;

	if ((*stack) == NULL)
		printf("\n");
	else
	{
		while ((aux) != NULL)
		{
			if ((aux->n <= 0 || aux->n > 255))
				break;
			printf("%c", (aux)->n);
			(aux) = (aux)->next;
			a++;
		}
		if (a > 0)
			printf("\n");
	}
	(void)line_number;
}
