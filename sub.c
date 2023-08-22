#include "monty.h"
/**
  *f_sub - Funct of sustration
  *@hd: stack head
  *@count: line_number
  *Return: Nothing
 */
void f_sub(stack_t **hd, unsigned int count)
{
	stack_t *ax;
	int sus, nodes;

	ax = *hd;
	for (nodes = 0; ax != NULL; nodes++)
		ax = ax->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	ax = *hd;
	sus = ax->next->n - ax->n;
	ax->next->n = sus;
	*hd = ax->next;
	free(ax);
}
