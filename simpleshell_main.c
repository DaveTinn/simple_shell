#include "simpleshell.h"
#include <stdio.h>
/**
 * main - Entry point of the Simple Shell program
 *
 * Return: 0 on success
 */
int main(void)
{
	char user_inp[MAX_INPUT_SIZE];
	char *env[] = {"PATH=/bin", NULL};
	char *arguments[MAX_ARG];

	while (1)
	{
		show_ourPrompt();
		if (fgets(user_inp, sizeof(user_inp), stdin) == NULL)
		{
			perror("Error reading input");
			exit(EXIT_FAILURE);
		}
		rm_newline(user_inp, strlen(user_inp));
		if (strcmp(user_inp, "exit") == 0)
		{
			write(STDOUT_FILENO, "Quitting the Shell Program\n", 30);
			break;
		}
		shell_tokenizer(user_inp, arguments);

		if (arguments[0] == NULL)
		{
			continue;
		}
		if (strcmp(arguments[0], "ls") == 0)
		{
			handling_ls_command(arguments);
			continue;
		}
		perform_command(arguments[0], arguments, env);
	}
	return (0);
}
