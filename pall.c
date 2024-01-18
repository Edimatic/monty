#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * lp_pall_ - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void lp_pall_(stack_t **fore, unsigned int marker)
{
	stack_t *hol;
	(void)marker;

	hol = *fore;
	if (hol == NULL)
		return;
	while (hol)
	{
		printf("%d\n", hol->n);
		hol = hol->next;
	}
}

