#include "monty.h"
/**
 * f_div - Func that divds tow top in stck
 * @hd: stack head
 * @count: line_number
 * Return: Nothing
*/
void f_div(stack_t **hd, unsigned int count)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	k = *hd;
	if (k->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	aux = k->next->n / k->n;
	k->next->n = aux;
	*hd = k->next;
	free(k);
}
