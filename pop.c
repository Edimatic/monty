#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	
	if (!stack || !*stack)
	{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
	}

	temp = *stack;

	if (temp->next)
	{
	*stack = temp->next;
	(*stack)->prev = NULL;
	}
	else
	{
	*stack = NULL;
	}

	free(temp);
}

