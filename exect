#include "simpleshell.h"
int perform_commd(char *args[])
{
	pid_t my_PID;
	int perf;

	my_PID = fork();
	if (my_PID == -1)
	{
		perror("Cannot create this process");
	}
	else if (my_PID == 0)
	{
		perf = execve(args[0], args, NULL);
		if (perf == -1)
		{
			perror("Error while performing process");
		}
	}
	else
	{
		wait(NULL);
	}
	return (0);
}
