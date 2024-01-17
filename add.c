#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void add(stack_t **stack, unsigned int line_number)
{

	int sum;
	stack_t *temp;

	if (!stack || !*stack || !((*stack)->next))
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

	temp = *stack;

	sum = temp->n + temp->next->n;
	temp->next->n = sum;

/* Remove the top element */
	temp = temp->next;
	if (temp->next)
	{
	temp->prev = NULL;
	*stack = temp;
	}
	else
	{
	free(temp);
	*stack = NULL;
	}
}

