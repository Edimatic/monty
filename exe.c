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
				{"push", aka_push_}, {"pall", lp_pall_}, {"pint", aka_pint_},
				{"pop", aka_pop_},
				{"swap", m_swap_},
				{"add", f_add},
				{"nop", kil_nop_},
				{"sub", s_sub_},
				{"div", wit_div_},
				{"mul", str_mul_},
				{"mod", mk_mod_},
				{"pchar", st_pchar_},
				{"pstr", aka_pstr_},
				{"rotl", aka_rotl_},
				{"rotr", ak_rotr_},
				{"queue", aka_queue_},
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
