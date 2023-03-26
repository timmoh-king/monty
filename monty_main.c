#include "monty.h"

/**
 * main - the main function
 *
 * Return: Always 0 (Success)
 */
int main()
{       
        stack_t *head;
        int len;
        char **av;
        char *line = malloc(sizeof(char) * 100);
        char *line_cpy = malloc((100) * av);
        
        if (line == NULL || line_cpy == NULL)
                return (malloc_error());

        FILE *fd = fopen(argv[1], "r");
        if (fd == NULL)
                return (f_open_error(fd));
        
        if (argc != 2)
                return (usage_error());
        
        while (fgets(line, sizeof(line),  fd))
        {
		av = tokenize(line_cpy);
		if (av[0] == NULL)
			continue;
		if (unknown_opcode(av[0]) == -1)
			/* opcode error */
		len = list_len(head);
		(*getop(av[0]))(&head, len);
	}
	fclose(fd);

	return (0);
}
