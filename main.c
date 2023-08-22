#include "monty.h"
/**
* main - Func of monty code interpreter
* @argc: no of args
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *cont;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stck = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		cont = NULL;
		read_line = getline(&cont, &size, file);
		bus.content = cont;
		count++;
		if (read_line > 0)
		{
			execute(cont, &stck, count, file);
		}
		free(cont);
	}
	free_stack(stck);
	fclose(file);
return (0);
}