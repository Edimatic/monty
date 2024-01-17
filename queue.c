#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * queue - sets the format of the data to a queue (FIFO)
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void q_queue_(stack_t **stack, unsigned int line_nums)
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
/**
 * stack - sets the format of the data to a stack (LIFO)
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void s_stack_(stack_t **stack, unsigned int line_nums)
{
    (void)line_nums;

    (void)stack; /* No action needed for stack mode */
}

