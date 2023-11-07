#include "simpleshell.h"
#include <stdio.h>
/**
 * main - function to check the code
 *
 * Return: 0 Always
 */
int shell_tokenizer(char *shell_cmd, char args[])
{
	char *dlim = " ";
	char *shell_token;
	int tally = 0;

	shell_token = strtok(token_command, dlim);
	while (shell_token != NULL)
	{
		agrs[tally++] = shell_token;
		shell_token = strtok(NULL, dlim);
	}
	args[tally] = NULL;
	return (tally);
}
