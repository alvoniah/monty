#include "monty.h"
/**
 * f_swap - Func that adds
 * @hd: stack head
 * @count: line_number
 * Return: Nothing
*/
void f_swap(stack_t **hd, unsigned int count)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	k = *hd;
	aux = k->n;
	k->n = k->next->n;
	k->next->n = aux;
}
