#define _POSIX_C_SOURCE 200809L

#include "monty.h"

void f_add(stack_t **head, unsigned int counter){

	stack_t *hol;
	int len = 0, aux;

	hol = *head;
	while (hol)
	{
		hol = hol->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hol = *head;
	aux = hol->n + hol->next->n;
	hol->next->n = aux;
	*head = hol->next;
	/*free(hol);*/
}

