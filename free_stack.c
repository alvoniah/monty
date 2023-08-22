#include "monty.h"
/**
* free_stack - Func that free doubly list
* @hd: The head of the stack
* Return: nothing
*/
void free_stack(stack_t *hd)
{
	stack_t *ax;

	ax = hd;
	while (hd)
	{
		ax = hd->next;
		free(hd);
		hd = ax;
	}
}
