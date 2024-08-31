#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
<<<<<<< HEAD
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#endif
=======
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

>>>>>>> 8ee87381f62eb1dd4bc8831dc4202ed3e7847b07
