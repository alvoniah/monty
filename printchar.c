#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack
 * @hd: stack head
 * @count: line_number
 * Return: no return
*/
void f_pchar(stack_t **hd, unsigned int count)
{
	stack_t *h;

	h = *hd;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
