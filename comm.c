#define _POSIX_C_SOURCE 200809L

#include "monty.h"

void free_stack(stack_t *head){

	stack_t *max;

	max = head;
	while (head)
	{
		max = head->next;
		free(head);
		head = max;}
}
