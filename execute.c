#include "shell.h"

/**
 * execute_command - Executes a command.
 * @command: The command to execute.
 */
void execute_command(char *command)
{
	pid_t pid;
	int status;
	char *argv[2];

	argv[0] = command;
	argv[1] = NULL;

	pid = fork();
	if (pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			handle_error(command);
		}
		_exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("fork error");
	}
	else
	{
		waitpid(pid, &status, 0);
	}
}

