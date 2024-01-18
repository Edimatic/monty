#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * aka_pint_ - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void aka_pint_(stack_t **fore, unsigned int marker)
{
	if (*fore == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*fore)->n);
}

