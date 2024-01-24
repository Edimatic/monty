#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
* f_pop - pops the very top element of the stack
* @head: stack given by main in start.c
* @counter: line number for error messages
*
* Return: void after execution
*/

void f_pop(stack_t **head, unsigned int counter)
{

	stack_t *hol;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hol = *head;
	*head = hol->next;
	free(hol);
}
