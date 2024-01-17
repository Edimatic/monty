#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * com - treats the line as a comment and does nothing
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void _com_(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
/* Do nothing, treat the line as a comment */
}

