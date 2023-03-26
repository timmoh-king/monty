#include "monty.h"

size_t stack_len(const stack_t *h);
/**
 * stack_len - length of the stack
 * @h: the head node
 *
 * Return: length of the stack
 */
size_t stack_len(const stack_t *h)
{
	size_t sum_elements = 0;

	while (h)
	{
		sum_elements++;
		h = h->next;
	}
	return(sum_elements);
}
/**
 * push - push new node to the stack
 *
 * Return: nothing
 */
void push(stack_t **head, unsigned int line_number)
{
	char **av = token(line);
	stack_t *temp = malloc(sizeof(stack_t));
	int data = 10;

	/* if (av[1] != NULL)
		data = atoi(av[1]); */

	if (av[1] == NULL || isdigit(data) == 0)
		(no_int_error(line_number));

	if (temp == NULL)
		(malloc_error());

	temp->n = data;
	temp->next = *head;
	temp->prev = NULL;
	*head = temp;
}
/**
 * getop - get the opcodes
 * @str: the name of the opcode
 * @stack_t: the opcode structure
 * @int: the number
 *
 * Return: nothing
 */
void(*getop(char *str))(stack_t**, unsigned int)
{
	instruction_t op[] = {
		{"push", push},
		{NULL, NULL},
	};
	int i = 0;

	while (op[i].opcode)
	{
		if (strcmp(str, op[i].opcode) == 0)
			return (op[i].f);
		i++;
	}
	return (0);
}
