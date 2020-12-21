#include "header_monty.h"
/**
  * printerror - function to print corresponding error
  * @error: number of error
  * @command: command inputted
  * Return: void
**/
void printerror(int error, unsigned int line_number)
{
	if (error == 1)
	{
        printf("L%d: usage: push integer\n", line_number)
        exit(EXIT_FAILURE);
	}
}