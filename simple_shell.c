#include "main.h"

/**
 * main - simple shell started
 *
 * Return: 0
 */

int main(void)
{
	char *command = NULL;
	size_t bufsize = 0;
	ssize_t nread;
	char *args[100];
	pid_t pid;
	int i;

	while (1)
	{
		printf("simple_shell> ");

		nread = getline(&command, &bufsize, stdin);

		if (nread == -1)
		{
			printf("\n");
			break;
		}

		command[strcspn(command, "\n")] = '\0';
		if (command[0] == '\0')
		{
			continue;
		}
		i = 0;
		args[i] = strtok(command, " ");
		while (args[i] != NULL)
		{
			i++;
			args[i] = strtok(NULL, " ");
		}
		pid = fork();

		if (pid == -1)
		{
			perror("Error");
		}
		else if (pid == 0)
		{
			if (execve(args[0], args, NULL) == -1)
			{
				perror("Error");
			}
			exit(EXIT_FAILURE);
		}
		else
		{
			wait(NULL);
		}
	}

	free(command);
	return (0);
}
