#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value to be added when needed
 * Return: return 0 after the execution 
*/

void addnode(stack_t **head, int n)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

