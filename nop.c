#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * nop - doesn't do anything
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
/* No operation, do nothing */
}

