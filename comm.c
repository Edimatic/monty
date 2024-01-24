#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * free_stack - treats the line as a comment and does nothing
 *
 * @head: double pointer to the head of the stack
 */

void free_stack(stack_t *head)
{

	stack_t *max;

	max = head;
	while (head)
	{
		max = head->next;
		free(head);
		head = max;}
}
