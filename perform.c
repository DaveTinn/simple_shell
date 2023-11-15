#include "simpleshell.h"
/**
 * perform_commd - executes the command
 * @command_args: parameter to be checked
 *
 * Return: Nothing
 */
void perform_commd(char **command_args)
{
	if (execvp(command_args[0], command_args) == -1)
	{
		perror("Error executing command");
		exit(EXIT_FAILURE);
	}
}
