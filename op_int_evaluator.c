#include "monty_header.h"
/**
 * op_int_evaluator - function that will evaluate
 * the opcode and integer if provided
 * @opcode: given opcode
 * @unsigned int line_number: line number
 * Return: void
**/
void op_int_evaluator(char *given_opcode, stack_t **stack, unsigned int line_number)
{
	instruction_t opcode_func[] = {{"push", op_push}, {NULL, NULL}};
	int counter = 0;

	printf("Antes de evaluar\n");
	while(counter < 1)
	{
		if (strcmp(opcode_func[counter].opcode, given_opcode) == 0)
		{
			opcode_func[counter].f(stack, line_number);
			break;
		}
		counter++;
	}
}