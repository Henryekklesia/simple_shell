#include "main.h"

void execute_command(char *shell_name, char *command)
{
    pid_t pid;
    char *argv[2];

    /* Only execute the command if not empty */
    if (command == NULL || *command == '\0')
        return;

    pid = fork();
    if (pid == 0) /* Child process */
    {
        argv[0] = command;
        argv[1] = NULL;

        if (execve(command, argv, environ) == -1)
        {
            handle_error(shell_name, command);
            exit(EXIT_FAILURE);
        }
    }
    else if (pid < 0) /* Forking failed */
    {
        perror("fork");
    }
    else /* Parent process */
    {
        wait(NULL); /* Wait for child process to finish */
    }
}

