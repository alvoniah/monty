#include "monty.h"
/**
 * f_pop - prints the value top
 * @hd: head of stack
 * @count: line_number
 * Return: no return
*/
void f_pop(stack_t **hd, unsigned int count)
{
	stack_t *h;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	*head = h->next;
	free(h);
}
