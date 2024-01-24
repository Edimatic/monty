#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * m_swap_ -  swaps data from top to previous
 * @fore: stack given by main
 * @marker: amount of lines to mark
 *
 * Return: void after program execution
 */

void m_swap_(stack_t **fore, unsigned int marker)
{

	stack_t *edd;
	int len = 0, max;

	edd = *fore;
	while (edd)
	{
		edd = edd->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	edd = *fore;
	max = edd->n;
	edd->n = edd->next->n;
	edd->next->n = max;
}

