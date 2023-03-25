#include "monty.h"

/**
 * getop - get the opcodes
 * @str: the name of the opcode
 * @stack_t: the opcode structure
 * @int: the number
 *
 * Return: nothing
 */
void(*getop(char *str)(stack_t**, unsigned int f))
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
