#include "main.h"

void handle_error(char *shell_name, char *command)
{
    write(STDERR_FILENO, shell_name, _strlen(shell_name));
    write(STDERR_FILENO, ": 1: ", 5);
    write(STDERR_FILENO, command, _strlen(command));
    write(STDERR_FILENO, ": not found\n", 12);
}

