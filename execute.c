#include "monty.h"
/**
* execute - Funct that execute the opcide
* @stck: the head linked list - stack
* @count: line_counter
* @file: poiner to monty file
* @cont: line content
* Return: Nothing
*/
int execute(char *cont, stack_t **stck, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *opp;

	opp = strtok(cont, " \n\t");
	if (opp && opp[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[j].opcode && opp)
	{
		if (strcmp(opp, opst[j].opcode) == 0)
		{	opst[j].f(stck, count);
			return (0);
		}
		j++;
	}
	if (opp && opst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, opp);
		fclose(file);
		free(cont);
		free_stack(*stck);
		exit(EXIT_FAILURE); }
	return (1);
}
