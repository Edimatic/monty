#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
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
