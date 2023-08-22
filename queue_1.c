#include "monty.h"
/**
 * f_queue - prints the value at top
 * @hd: head of stack
 * @count: line_number
 * Return: no return
*/
void f_queue(stack_t **hd, unsigned int count)
{
	(void)hd;
	(void)count;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @new: new_value
 * @hd: head of the stack
 * Return: no return
*/
void addqueue(stack_t **hd, int new)
{
	stack_t *new_node, *aux;

	aux = *hd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->new = new;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*hd = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
