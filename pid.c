#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_parentID;

	my_parentID = getppid();
	printf("%u\n", my_parentID);
	return (0);
}
