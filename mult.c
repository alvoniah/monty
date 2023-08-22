#include "monty.h"
/**
 * f_mul - multiplies the top two elems of the stack.
 * @hd: stack head
 * @count: line_number
 * Return: no return
*/
void f_mul(stack_t **hd, unsigned int count)
{
	stack_t *h;
	int len = 0, aux;

	h = *hd;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*hd = h->next;
	free(h);
}
