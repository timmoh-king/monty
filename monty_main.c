#include "monty.h"

/**
 * main - the main function
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{       
        stack_t *head;
        int len;
        char **av;
        char *line_cpy = malloc(100);
        

        FILE *fd = fopen(argv[1], "r");
        line = malloc(sizeof(char) * 100);
        if (line == NULL || line_cpy == NULL)
		malloc_error();

        if (fd == NULL)
		f_open_error(argv[1]);
        
        if (argc != 2)
		usage_error();

        while (fgets(line, sizeof(line),  fd))
        {
		strcpy(line_cpy, line);
		av = token(line_cpy);
		if (av[0] == NULL)
			continue;

		len = stack_len(head);
		/* if (unknown_opcode(av[0]) == -1)
			unknown_op_error(av[0], len); */

		(*getop(av[0]))(&head, len);
		/* printf("%s\n", av[1]); */
	}
	fclose(fd);

	return (0);
}
