#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * mk_mod_ - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void mk_mod_(stack_t **fore, unsigned int marker)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	hol = *fore;
	if (hol->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	max = hol->next->n % hol->n;
	hol->next->n = max;
	*fore = hol->next;
	free(hol);
}

