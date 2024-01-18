#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void st_pchar_(stack_t **fore, unsigned int marker)
{
	stack_t *hol;

	hol = *fore;
	if (!hol)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	if (hol->edd > 127 || hol->edd < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hol->edd);
}

