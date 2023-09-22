#include "shell.h"

/**
 * main - excuute doffrent function and comeup with
 * a working simple shell
 * Return: 0 for success
 */

int main(void)
{
	char command[256];

	while (true)
	{
		my_prompt("$");
		get_cmd(command, sizeof(command));
		ex_cmd(command);
	}
	return (0);
}
