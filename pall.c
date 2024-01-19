#define _POSIX_C_SOURCE 200809L

#include "monty.h"

void f_pall(stack_t **head, unsigned int counter){

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

