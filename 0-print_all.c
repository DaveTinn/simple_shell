#include "simpleshell.h"
#include <stdio.h>
/**
 * main - function to check code
 * @av: NULL terminated array of strings
 * @ac: number of items in av
 * Return: 0 Always
 */
int main(int ac, char **av)
{
	int all_args;

	for (all_args = 0; all_args < ac; all_args++)
	{
		printf("Arguments %d: %s\n", all_args, av[all_args]);
	}
	return (0);
}
