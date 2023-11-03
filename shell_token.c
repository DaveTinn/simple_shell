#include "simpleshell.h"
#include <stdio.h>
/**
 * main - function to check the code
 *
 * Return: 0 Always
 */
int main(void)
{
	char token_command[] = "This is a token in Simple Shell Project";
	char *dlim = " ";
	char *shell_token;

	shell_token = strtok(token_command, dlim);
	while (shell_token != NULL)
	{
		printf("%s\n", shell_token);
		shell_token = strtok(NULL, dlim);
	}
	return (0);
}
