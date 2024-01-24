#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * f_push - push element into the stack
 * @head: stack given by main
 * @counter: amount of lines to be counted
 *
 * Return: 0 after program execution
 */

void f_push(stack_t **head, unsigned int counter)
{

	int n, ok = 0;
	int flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			ok++;
		for (; bus.arg[ok] != '\0'; ok++)
		{
			if (bus.arg[ok] > 57 || bus.arg[ok] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }
	}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
