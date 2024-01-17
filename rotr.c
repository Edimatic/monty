#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void _rotr_(stack_t **stack, unsigned int line_nums)
{

	stack_t *temp;
	(void)line_nums;

	if (!stack || !*stack || !(*stack)->next)
	return;

	temp = *stack;

	while (temp->next)
	temp = temp->next;

	temp->prev->next = NULL;
	temp->prev = NULL;
	temp->next = *stack;
	(*stack)->prev = temp;

	*stack = temp;
}

