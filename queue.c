#define _POSIX_C_SOURCE 200809L

#include "monty.h"
void f_queue(stack_t **head, unsigned int counter)	{

	(void)head;
	(void)counter;
	bus.lifi = 1;
}


void addqueue(stack_t **head, int n)	{
	
	stack_t *new_node, *max;

	max = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (max)
	{
		while (max->next)
			max = max->next;
	}
	if (!max)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		max->next = new_node;
		new_node->prev = max;
	}
}

