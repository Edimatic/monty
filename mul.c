#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * str_mul_ - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void str_mul_(stack_t **fore, unsigned int marker)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	hol = *fore;
	max = hol->next->n * hol->n;
	hol->next->n = max;
	*fore = hol->next;
	free(hol);
}
