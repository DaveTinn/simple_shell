#include "simpleshell.h"
#include <stdio.h>

/**
 * main - entry point of the shell program
 *
 * Return: 0 on success
 */

int main(void)
{
	char user_inp[MAX_INPUT_SIZE];
	pid_t our_pid;
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
			printf("Quitting the Shell Program\n");
			break;
		}
		shell_tokenizer(user_inp, arguments);
		if (strcmp(arguments[0], "cd") == 0)
		{
			if (arguments[1] == NULL)
			{
				fprintf(stderr, "cd: missing argument\n");
			}
			else
			{
				if (chdir(arguments[1]) != 0)
				{
					perror("/bin/ls");
				}
			}
			continue;
		}
		our_pid = fork();
		if (our_pid == -1)
		{
			perror("Forking comes with Error");
			exit(EXIT_FAILURE);
		}
		if (our_pid == 0)
		{
			execve(arguments[0], arguments, env);
			perror("Error performing command");
			exit(EXIT_FAILURE);
		}
		else
		{
			waitpid(our_pid, NULL, 0);
		}
	}
	return (0);
}
