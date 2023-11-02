#include "simpleshell.h"
/**
 * main - function to check the code
 *
 * Return: 0 Always
 */
int main(void)
{
	char *token_command;
	char *dlim = " ,";
	char *shell_token;

	token_command = "This is a Simple Shell Project, and it feels good working with my partner";
	shell_token = strtok(token_command, dlim);
	while (shell_token != NULL)
	{
		printf("%s\n", shell_token);
		shell_token = strtok(NULL, dlim);
	}
	return (0);
}	
