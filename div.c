#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * f_div_ - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 *
 * Return: no return
*/

void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hol = *head;
	if (hol->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	max = hol->next->n / hol->n;
	hol->next->n = max;
	*head = hol->next;
	free(hol);
}

