#include "monty.h"
/**
  *f_rotr- rotates the value stack to the bottom
  *@hd: head stack
  *@count: line_number
  *Return: no return
 */
void f_rotr(stack_t **hd, __attribute__((unused)) unsigned int count)
{
	stack_t *cpy;

	cpy = *hd;
	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *hd;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*hd)->prev = cpy;
	(*hd) = cpy;
}
