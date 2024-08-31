#include "shell.h"

/**
 * handle_error - Handles errors when a command is not found.
 * @command: The command that failed to execute.
 */
void handle_error(char *command)
{
	write(STDOUT_FILENO, command, strlen(command));
	write(STDOUT_FILENO, ": No such file or directory\n", 28);
}

