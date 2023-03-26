#include "monty.h"

/**
 * token - tokenize a string
 * @cmd: the command to be tokenized
 *
 * Return: tokenized string
 */
char **token(char *cmd)
{
	char **av = malloc(sizeof(char *) * 100);
	char delim[] = " \t\r\n";
	char *token = strtok(cmd, delim);
	int i = 0;

	if (av == NULL)
		(malloc_error());

	while (token)
	{
		av[i] = token;
		i++;
		token = strtok(NULL, delim);
	}

	av[i] = NULL;
	return (av);
}
