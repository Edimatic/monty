#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * aka_pop_ - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void aka_pop_(stack_t **fore, unsigned int marker)
{
	stack_t *hol;

	if (*fore == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	hol = *fore;
	*fore = hol->next;
	free(hol);
}
