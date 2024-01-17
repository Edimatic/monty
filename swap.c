#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
* swap - swaps the top two elements of the stack
* @stack: double pointer to the head of the stack
* @line_number: current line number in the file
*/
void swap(stack_t **stack, unsigned int line_number)
{
	int temp_value;
	stack_t *temp;

	if (!stack || !*stack || !((*stack)->next))
	{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

	temp = *stack;

	temp_value = temp->n;
	temp->n = temp->next->n;
	temp->next->n = temp_value;
}

