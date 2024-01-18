#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void s_sub_(stack_t **fore, unsigned int marker)
{
	stack_t *aux;
	int sus, nodes;

	aux = *fore;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	aux = *fore;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*fore = aux->next;
	free(aux);
}

