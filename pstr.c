#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * aka_pstr_ - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void aka_pstr_(stack_t **fore, unsigned int marker)
{
	stack_t *err;
	(void)marker;

	err = *fore;
	while (err)
	{
		if (err->n > 127 || err->n <= 0)
		{
			break;
		}
		printf("%c", err->n);
		err = err->next;
	}
	printf("\n");
}
