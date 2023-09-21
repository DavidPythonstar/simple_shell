#include "shell.h"

/**
 * get_cmd : gets command from user
 * @command: thecommand the user inputs
 * @size : size of the command
 * Return: None
 */

void get_cmd(char *command, size_t size)
{
        if (fgets(command, size, stdin) == NULL)
        {
                if (feof(stdin))
                {
                        printf("\n");
                        exit(EXIT_SUCCESS);
                }
                else
                {
                        printf("Error while reading input\n");
                        exit(EXIT_FAILURE);
                }
        }
        command[strcspn(command, "\n")] = '\0';
}
