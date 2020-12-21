#include "monty.h"
/**
  * printerror - function to print corresponding error
  * @error: number of error
  * @line_number: Line Number
  * Return: void
**/
void printerror(int error, unsigned int line_number)
{
	if (error == 1)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	if (error == 2)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (error == 3)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number);
		exit(EXIT_FAILURE);
	}
}
