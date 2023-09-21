#ifndef SHELL_H
#define SHELL_H
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

void my_prompt();
void get_cmd(char *command, size_t length);
void ex_cmd(const char *command);

#endif /* SHELL_H */

