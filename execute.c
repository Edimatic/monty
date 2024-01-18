#define _POSIX_C_SOURCE 200809L

#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int x_exe(char *content, stack_t **fore, unsigned int marker, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", m_swap_},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", s_sub_},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", aka_rotl_},
				{"rotr", ak_rotr_},
				{"queue", f_queue},
				{"stack", st_stack_},
				{NULL, NULL}
				};
	unsigned int edd = 0;
	char *man;

	man = strtok(content, " \n\t");
	if (man && man[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[edd].opcode && man)
	{
		if (strcmp(man, opst[edd].opcode) == 0)
		{	opst[edd].f(fore, marker);
			return (0);
		}
		edd++;
	}
	if (man && opst[edd].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", marker, man);
		fclose(file);
		free(content);
		free_stack(*fore);
		exit(EXIT_FAILURE); }
	return (1);
}
