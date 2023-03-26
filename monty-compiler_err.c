#include "monty.h"

void usage_error(void);
void malloc_error(void);
void f_open_error(char *filename);
void unknown_op_error(char *opcode, unsigned int line_number);
void no_int_error(unsigned int line_number);

/**
 * usage_error - print error messages
 *
 * Return: always (EXIT_FAILURE)
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - print malloc failure
 *
 * Return: always (EXIT_FAILURE)
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * f_open_error - print open file error
 * @filename: the name of the file to open
 *
 * Return: always (EXIT_FAILURE)
 */
void f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * unknown_op_error - wrong opcode instruction
 * @line_number: the line index of the error
 * @opcode: the instruction
 *
 * Return: always (EXIT_FAILURE)
 */
void unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}

/**
 * no_int_error - check if there is no integer
 * @line_number: index of the line executed
 *
 * Return: always (EXIT_FAILURE)
 */
void no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}
