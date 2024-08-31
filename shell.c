#include "main.h"

int main(int argc, char **argv)
{
    char *command = NULL;
    size_t bufsize = 0;
    ssize_t nread;

    (void)argc; /* Ignore unused argument */

    while (1)
    {
        display_prompt(); /* Display the shell prompt */
        
        /* Read the command from the user */
        nread = getline(&command, &bufsize, stdin);
        if (nread == -1) /* Handle Ctrl+D (EOF) */
        {
            if (feof(stdin))
                break;
            perror("getline");
            continue;
        }

        /* Remove newline character */
        if (command[nread - 1] == '\n')
            command[nread - 1] = '\0';

        /* Execute the command */
        execute_command(argv[0], command);
    }

    free(command); /* Free allocated memory */
    return (0);
}

