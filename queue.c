#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void aka_queue_(stack_t **fore, unsigned int marker)
{
	(void)fore;
	(void)marker;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void the_queue_(stack_t **fore, int edd)
{
	stack_t *st_point, *aux;

	aux = *fore;
	st_point = malloc(sizeof(stack_t));
	if (st_point == NULL)
	{
		printf("Error\n");
	}
	st_point->edd = edd;
	st_point->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*fore = st_point;
		st_point->prev = NULL;
	}
	else
	{
		aux->next = st_point;
		st_point->prev = aux;
	}
}

