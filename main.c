#include "shell.h"

/**
 * main - Entry point of the shell program.
 * Return: 0 on success, otherwise failure.
 */

int main(void)
{
	char *command;
	int status = 1;

	while (status)
	{
		prompt();
		command = read_input();
		if (command == NULL)
		{
			break;
		}
		if (command[0] != '\0')
		{
			execute_command(command);
		}
		free(command);
	}
	return (0);
}

/**
 * prompt - Displays the shell prompt.
 */

void prompt(void)
{
	write(STDOUT_FILENO, "#cisfun$ ", 9);
	fflush(stdout);
}
