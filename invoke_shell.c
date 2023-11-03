#include "simpleshell.h"
#include <stdio.h>
/**
 * inv_sh_commnd - function to execute shell command
 * Return: Nothing
 */
void inv_sh_commnd(const char *sh_command)
{
	pid_t our_childPID = fork();
	char *procs[] = {"/bin/ls", "-l", NULL};

	if (our_childPID == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (our_childPID == 0)
	{
		procs[2] = (char *)sh_command;
		execve("/bin/ls", procs, NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
