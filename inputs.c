#include "shell.h"

/**
 * read_input - Reads the user input.
 * Return: The input string.
 */
char *read_input(void)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t nread;

	nread = getline(&input, &len, stdin);
	if (nread == -1)
	{
		free(input);
		return (NULL);
	}

	/* Remove the newline character */
	if (input[nread - 1] == '\n')
	{
		input[nread - 1] = '\0';
	}
	return (input);
}

