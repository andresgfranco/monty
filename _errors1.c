#include "monty.h"
/**
* printerror1 - function to print corresponding error
* @error: number of error
* @line_number: Line Number
* Return: void
**/
void printerror1(int error, unsigned int line_number)
{
	if (error == 9)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (error == 10)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
