#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void _rotl_(stack_t **stack, unsigned int line_nums)
{
	stack_t *temp;
	(void)line_nums;

	if (!stack || !*stack || !(*stack)->next)
	return;

	temp = *stack;

	while (temp->next)
	temp = temp->next;

	temp->next = *stack;
	(*stack)->prev = temp;

	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	temp->next->next = NULL;
}

