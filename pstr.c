#include "monty.h"
/**
 * f_pstr - prints string starting at the top
 * @hd: stack head
 * @count: line_number
 * Return: no return
*/
void f_pstr(stack_t **hd, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *hd;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
