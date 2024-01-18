#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * wit_div_ - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void wit_div_(stack_t **fore, unsigned int marker)
{
	stack_t *hol;
	int len = 0, max;

	hol = *fore;
	while (hol)
	{
		hol = hol->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	hol = *fore;
	if (hol->edd == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	max = hol->next->edd / hol->edd;
	hol->next->edd = max;
	*fore = hol->next;
	free(hol);
}

