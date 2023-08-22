#include "monty.h"
/**
 * f_pint - prints the value at top
 * @hd: head of the stack
 * @count: line_number
 * Return: no return
*/
void f_pint(stack_t **hd, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
