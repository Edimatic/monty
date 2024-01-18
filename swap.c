#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void m_swap_(stack_t **fore, unsigned int marker)
{
	stack_t *ed;
	int len = 0, aux;

	ed = *fore;
	while (ed)
	{
		ed = ed->next;
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
	ed = *fore;
	aux = ed->edd;
	ed->edd = ed->next->edd;
	ed->next->edd = aux;
}

