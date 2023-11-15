#include "simpleshell.h"
<<<<<<< HEAD
/**
 * perform_commd - executes the command
 * @command_args: parameter to be checked
 *
 * Return: Nothing
 */
=======

/**
 * perform_commd - Executes a command using execvp.
 *
 * This function attempts to execute a command with the provided arguments
 * using the execvp system call. If the execution fails, an error message is
 * printed, and the program exits with a failure status.
 *
 * @command_args: The array of command arguments, including the command itself.
 *
 * Return: This function does not return a value. It exits on failure.
 */

>>>>>>> d0360e129b887f296c1c737f594c5ecaeed4d8cd
void perform_commd(char **command_args)
{
	if (execvp(command_args[0], command_args) == -1)
	{
		perror("Error executing command");
		exit(EXIT_FAILURE);
	}
}
