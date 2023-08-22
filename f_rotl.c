#include "monty.h"
/**
  *f_rotl- rotates the stack value to the top
  *@hd: head of stack
  *@count: line_number
  *Return: no return
 */
void f_rotl(stack_t **hd,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *hd, *aux;

	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	aux = (*hd)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *hd;
	(*hd)->next = NULL;
	(*hd)->prev = tmp;
	(*hd) = aux;
}
