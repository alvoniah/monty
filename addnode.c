#include "monty.h"
/**
 * addnode - func that add nod to hd stck
 * @hd: the head of the stck
 * @m: new value
 * Return: nothing to return
 */
void addnode(stack_t **hd, int m)
{
	stack_t *n_de, *ax;

	ax = *hd;
	n_de = calloc(1, sizeof(stack_t));
	if (n_de == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (ax)
		ax->prev = n_de;
	n_de->n = m;
	n_de->next = *hd;
	n_de->prev = NULL;
	*hd = n_de;
}
