#include "monty.h"
/**
 * op_eva - function that will evaluate
 * @given_opcode: the opcode provided
 * @stack: double pointer to double linked list
 * @line_number: line number
 * Return: void
**/
void op_eva(char *given_opcode, stack_t **stack, unsigned int line_number)
{
	instruction_t opcode_func[] = {{"push", op_push}, {"pall", op_pall},
		{"pint", op_pint}, {"pop", op_pop}, {"swap", op_swap}, {"add", op_add},
		{"nop", op_nop}, {"sub", op_sub}, {"div", op_div}, {NULL, NULL}};

	int counter = 0;

	while (counter < 9)
	{
		if (strcmp(opcode_func[counter].opcode, given_opcode) == 0)
		{
			opcode_func[counter].f(stack, line_number);
			return;
		}
		counter++;
	}
	free_stack(*stack);
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, given_opcode);
	exit(EXIT_FAILURE);
}

/**
 * string_eva - function that will find a character
 * different from numbers and minus at s[0]
 * @pushed_integer: pushed integer
 * Return: 1 if character different from number found
 * or 0 if just numbers
**/
int string_eva(char *pushed_integer)
{
	int i;

	for (i = 1; pushed_integer[i] != '\0'; i++)
	{
		if (pushed_integer[i] < 48 || pushed_integer[i] > 57)
		{
			return (1);
		}
	}
	return (0);
}
