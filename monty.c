#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * main - Monty bytecode interpreter
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	FILE *file;
	stack_t *stack = NULL;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	char *opcode;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	while (getline(&line, &len, file) != -1)
	{
		line_number++;
		opcode = strtok(line, " \t\n");

		if (opcode && opcode[0] != '#')
		{
			if (strcmp(opcode, "push") == 0)
			{
				push(&stack, line_number);
			}
			else if (strcmp(opcode, "pall") == 0)
			{
				pall(&stack, line_number);
			}
			else
			{
				fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
				free(line);
				fclose(file);
				exit(EXIT_FAILURE);
			}
		}
	}

	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}

