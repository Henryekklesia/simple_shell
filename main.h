#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

/* Global variable */
extern char **environ;

/* Function prototypes */
void display_prompt(void);
void execute_command(char *shell_name, char *command);
void handle_error(char *shell_name, char *command);
size_t _strlen(const char *str);

#endif /* MAIN_H */

