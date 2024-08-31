#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void prompt(void);
char *read_input(void);
void execute_command(char *command);
void handle_error(char *command);

#endif /* SHELL_H */

