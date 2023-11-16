#include "simpleshell.h"
#include <stdio.h>
/**
 * perform_command - Forks and executes a command
 * @commnd: The command to execute
 * @argmts: the arguments for the command
 * @env: The environment variables
 *
 * Return: Nothing
 */
void perform_command(char *commnd, char **argmts, char **env)
{
	pid_t our_pid = fork();

	if (our_pid == -1)
	{
		perror("Error when Forking");
		exit(EXIT_FAILURE);
	}
	if (our_pid == 0)
	{
		execve(commnd, argmts, env);
		perror("Error performing command");
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(our_pid, NULL, 0);
	}
}
