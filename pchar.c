#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void _pchar_(stack_t **stack, unsigned int line_number)
{

	int val_number;

	if (!stack || !*stack)
	{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
	exit(EXIT_FAILURE);
	}

	val_number = (*stack)->n;

	if (val_number < 0 || val_number > 127)
	{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
	exit(EXIT_FAILURE);
	}

	putchar(val_number);
	putchar('\n');
}

