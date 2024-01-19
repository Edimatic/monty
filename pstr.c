#define _POSIX_C_SOURCE 200809L

#include "monty.h"

void f_pstr(stack_t **head, unsigned int counter) {

	stack_t *hol;
	(void)counter;

	hol = *head;
	while (hol)
	{
		if (hol->n > 127 || hol->n <= 0)
		{
			break;
		}
		printf("%c", hol->n);
		hol = hol->next;
	}
	printf("\n");	}
