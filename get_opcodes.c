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
 * getop - get the opcodes
 * @str: the name of the opcode
 * @stack_t: the opcode structure
 * @int: the number
 *
 * Return: nothing
 */
void(*getop(char *str)(stack_t**, unsigned int))
{
	instruction_t op[] = {
		{"push", push},
		{"pall", pall}
	};
	int i = 0;

	while (op[i].opcodes)
	{
		if (strcmp(str, op[i].opcodes) == 0)
			return (op[i].f);
		i++;
	}
	return (0);
}
