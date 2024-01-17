#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void _pstr_(stack_t **stack, unsigned int line_nums)
{

	stack_t *temp;
	(void)line_nums;


	if (!stack || !*stack)
	{
	putchar('\n');
	return;
	}

	temp = *stack;

	while (temp && temp->n != 0 && (temp->n >= 0 && temp->n <= 127))
	{
	putchar(temp->n);
	temp = temp->next;
	}

	putchar('\n');
}

