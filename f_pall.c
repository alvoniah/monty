#include "monty.h"
/**
 * f_pall - prints value on the stack
 * @hd: stack head
 * @count: no used
 * Return: no return
*/
void f_pall(stack_t **hd, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *hd;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
