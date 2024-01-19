#define _POSIX_C_SOURCE 200809L

#include "monty.h"

void f_pchar(stack_t **head, unsigned int counter){

	stack_t *hol;

	hol = *head;
	if (!hol)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (hol->n > 127 || hol->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hol->n);
}

