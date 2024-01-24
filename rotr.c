#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
* ak_rotr_ - rotates the last node of a stack_t stack
* @fore: stack head
* @marker: line count
*
* Return: void after program execution
*/

void ak_rotr_(stack_t **fore, __attribute__((unused)) unsigned int marker)
{

	stack_t *duplicate;

	duplicate = *fore;
	if (*fore == NULL || (*fore)->next == NULL)
	{
		return;
	}
	while (duplicate->next)
	{
		duplicate = duplicate->next;
	}
	duplicate->next = *fore;
	duplicate->prev->next = NULL;
	duplicate->prev = NULL;
	(*fore)->prev = duplicate;
	(*fore) = duplicate;
}
