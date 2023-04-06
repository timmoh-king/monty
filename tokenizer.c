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
		malloc_error();

	while (token)
	{
		av[i] = token;
		i++;
		token = strtok(NULL, delim);
	}

	av[i] = NULL;
	return (av);
}
/**
 * is_digit - check for digits
 * @str: the string passed
 *
 * Return: 1 or 0 on fail
 */
int is_digit(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
	}
	return (0);
}
/**
 * pop - remove the the top element of the stack
 * @head: pointer to the head node
 * @line_number: the line_number
 */
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp = malloc(sizeof(stack_t));

	if (*head == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
/**
 * unknown_opcode - unknown opcode operand
 * @str: the string passed
 *
 * Return: 0 on success -1 on fail
 */
int unknown_opcode(char *str)
{
	if ((strcmp("push", str) != 0) &&
			(strcmp("pall", str) != 0) &&
			(strcmp("pint", str) != 0) &&
			(strcmp("pop", str) != 0))
		return (-1);
	return (0);
}
