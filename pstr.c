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
		if (err->edd > 127 || err->edd <= 0)
		{
			break;
		}
		printf("%c", err->edd);
		err = err->next;
	}
	printf("\n");
}
