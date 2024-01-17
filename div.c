#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * div_op - divides the second top element by the top element of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void div_op(stack_t **stack, unsigned int line_nums)
{
		int outcome;
		stack_t *temp;
	
	if (!stack || !*stack || !((*stack)->next))
	{
	fprintf(stderr, "L%u: can't div, stack too short\n", line_nums);
	exit(EXIT_FAILURE);
	}

	temp = *stack;

	if (temp->n == 0)
	{
	fprintf(stderr, "L%u: division by zero\n", line_nums);
	exit(EXIT_FAILURE);
	}

	outcome = temp->next->n / temp->n;
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

