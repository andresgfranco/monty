#include "monty.h"
/**
 * main - monty interpreter main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	FILE *OPFile;
	ssize_t read = 0;
	size_t len = 0;
	char *line = NULL, *token_op = NULL, *token = NULL;
	int line_number = 1;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	OPFile = fopen(argv[1], "r");

	if (OPFile == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, OPFile)) != -1)
	{
		token = strtok(line, DELIM);
		token_op = token;
		while (token != NULL)
		{
			token = strtok(NULL, DELIM);
			pushed_integer = token;
			if ((strcmp(token_op, "push") == 0) && (token == NULL))
			{
				printerror(2, line_number);
			}
			op_eva(token_op, &stack, line_number);
			break;
		}
		line_number++;
}
return (0);
}
