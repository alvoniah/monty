#include "monty.h"
/**
 * f_add - funct that adds two top elmt
 * @hd: stck hd
 * @count: the line no
 * Return: nothing to return
 */
void f_add(stack_t **hd, unsigned int count)
{
	stack_t *k;
	int lenn = 0, aux;

	k = *hd;
	while (k)
	{
		k = k->next;
		lenn++;
	}
	if (lenn < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	k = *hd;
	aux = k->n + k->next->n;
	k->next->n = aux;
	*hd = k->next;
	free(k);
}
