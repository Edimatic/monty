#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *arg;
	int value;
	stack_t *new_node;

/* Check if there is an argument */
	if (!stack || !line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}

arg = strtok(NULL, " \t\n");

/* Check if argument is provided */
	if (!arg)
	{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
	}

/* Convert argument to integer using atoi */
	value = atoi(arg);

	/* Create a new stack node */
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
	}

/* Initialize the new node */
	new_node->n = value;
	new_node->prev = NULL;

/* Update links */
	if (*stack)
	{
	new_node->next = *stack;
	(*stack)->prev = new_node;
	}
	else
	{
	new_node->next = NULL;
}

/* Update the stack head */
	*stack = new_node;
}

/**
 * pall - prints all the values on the stack
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

/* Suppress unused parameter warning */
	(void)line_number;

/* Print all values on the stack */
	while (current)
	{
	printf("%d\n", current->n);
	current = current->next;
	}
}

