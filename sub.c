#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * s_sub_ -  substracts the first two nodes of the stack
 * @fore: stack given by main
 * @marker: line counter to be marked
 *
 * Return: void after program execution
 */

void s_sub_(stack_t **fore, unsigned int marker)
{

	stack_t *max;
	int sus, nodes;

	max = *fore;
	for (nodes = 0; max != NULL; nodes++)
		max = max->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	max = *fore;
	sus = max->next->n - max->n;
	max->next->n = sus;
	*fore = max->next;
	free(max);
}

