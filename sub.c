#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * sub - subtracts the top element from the second top element of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void sub(stack_t **stack, unsigned int line_number)
{
		stack_t *temp;
		int result;

	if (!stack || !*stack || !((*stack)->next))
	{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

		temp = *stack;


	result = temp->next->n - temp->n;
	temp->next->n = result;

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

