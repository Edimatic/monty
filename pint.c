#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * f_pint - print the value at the top of the stack
 * @head: stack given by main in start.c
 * @counter: amount of lines to be counted
 *
 * Return: void
 */

void f_pint(stack_t **head, unsigned int counter)
{

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

