#include "monty.h"

/**
 * main - the main function
 * @argc: argument count
 * @argv: the argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	stack_t *head = NULL;
	int len;
	char **av;
	char *line_cpy = malloc(100);

	FILE *fd = fopen(argv[1], "r");

	if (argc != 2)
		usage_error();

	line = malloc(sizeof(char) * 100);
	if (line == NULL || line_cpy == NULL)
		malloc_error();

	if (fd == NULL)
		f_open_error(argv[1]);

	while (fgets(line, sizeof(line),  fd))
	{
		strcpy(line_cpy, line);
		av = token(line_cpy);
		if (av[0] == NULL)
			continue;

		len = stack_len(head);

		(*getop(av[0]))(&head, len);
	}
	fclose(fd);

	return (0);
}
