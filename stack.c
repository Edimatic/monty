#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * stack - sets the format of the data to a stack (LIFO)
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void s_stack_(stack_t **stack, unsigned int line_nums)
{
    (void)line_nums;

    (void)stack; /* No action needed for stack mode */
}

