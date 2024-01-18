#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void aka_push_(stack_t **fore, unsigned int marker)
{
	int man, xi = 0;
	int flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			xi++;
		for (; bus.arg[xi] != '\0'; xi++)
		{
			if (bus.arg[xi] > 57 || bus.arg[xi] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", marker);
			fclose(bus.file);
			free(bus.content);
			free_stack(*fore);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", marker);
		fclose(bus.file);
		free(bus.content);
		free_stack(*fore);
		exit(EXIT_FAILURE); }
	man = atoi(bus.arg);
	if (bus.lifi == 0)
		aka_queue_(fore, man);
	else
		aka_queue_(fore, man);
}

