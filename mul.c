#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head selector
 * @counter: line_number to be counted
 *
 * Return: return nothing after program execution
*/

void f_mul(stack_t **head, unsigned int counter)
{

	stack_t *hol;
	int len = 0, max;

	hol = *head;
	while (hol)
	{
		hol = hol->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hol = *head;
	max = hol->next->n * hol->n;
	hol->next->n = max;
	*head = hol->next;
	free(hol);	
}
