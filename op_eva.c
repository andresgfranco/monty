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
		{"pint", op_pint}, {NULL, NULL}};

	int counter = 0;

	while (counter < 3)
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
