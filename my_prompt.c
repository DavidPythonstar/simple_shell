#include "shell.h"
#include <stdio.h>

/**
 * my_prompt - prints the shell name on screen
 * Return: None
 */

void my_prompt(const char *message)
{
	write(1, message, strlen(message));
}
