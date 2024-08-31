#include "main.h"

void display_prompt(void)
{
    if (isatty(STDIN_FILENO)) /* Check if the input is from the terminal */
        write(STDOUT_FILENO, "#cisfun$ ", 9);
}

