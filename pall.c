#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack given by main in start.c
 * @counter: amount of lines to be counted
 *
 * Return: void
 */

void f_pall(stack_t **head, unsigned int counter)
{

	stack_t *hol;
	(void)counter;

	hol = *head;
	if (hol == NULL)
		return;
	while (hol)
	{
		printf("%d\n", hol->n);
		hol = hol->next;
	}
}

