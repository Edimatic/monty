#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * _mul_op - multiplies the second top element by the top element of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void _mul_op(stack_t **stack, unsigned int line_nums)
{

		int outcome;
		stack_t *temp;

	if (!stack || !*stack || !((*stack)->next))
	{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line_nums);
	exit(EXIT_FAILURE);
	}

	temp = *stack;
	outcome = temp->next->n * temp->n;

	temp->next->n = outcome;

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

