#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_parentPID;

	my_parentPID = getppid();
	printf("%u\n", my_parentPID);
	return (0);
}
