#include "simpleshell.h"
/**
 * handling_ls_command - Handles the 'ls' command
 * @cmd_argmts: The arguments passed to 'ls'
 *
 * Return: Nothing
 */
void handling_ls_command(char **cmd_argmts)
{
	if (cmd_argmts[1] == NULL)
	{
		write(STDERR_FILENO, "ls: argument not found\n", 25);
	}
	else
	{
		if (chdir(cmd_argmts[1]) != 0)
		{
			perror("ls");
		}
	}
}
