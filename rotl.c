#define _POSIX_C_SOURCE 200809L

#include "monty.h"

void aka_rotl_(stack_t **fore,  __attribute__((unused)) unsigned int marker) {

	stack_t *man = *fore, *fom;

	if (*fore == NULL || (*fore)->next == NULL)
	{
		return;
	}
	fom = (*fore)->next;
	fom->prev = NULL;
	while (man->next != NULL)
	{
		man = man->next;
	}
	man->next = *fore;
	(*fore)->next = NULL;
	(*fore)->prev = man;
	(*fore) = fom;
}
