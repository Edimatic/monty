#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * _ad_nod - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void _ad_nod(stack_t **fore, int ok)
{

	stack_t *exe_nod, *max;

	max = *fore;
	exe_nod = malloc(sizeof(stack_t));
	if (exe_nod == NULL)
	{ printf("Error\n");
		exit(0); }
	if (max)
		max->prev = exe_nod;
	exe_nod->n = ok;
	exe_nod->next = *fore;
	exe_nod->prev = NULL;
	*fore = exe_nod;
}

