#include "simpleshell.h"
/**
 * shell_tokenizer - function to tokenize
 * @shell_inp: pointer to a char data type
 * @argmts: pointer to a pointer of char data type
 *
 * Return: Nothing
 */
void shell_tokenizer(char *shell_inp, char **argmts)
{
	int tally = 0;
	char *shell_token = strtok(shell_inp, " ");

	while (shell_token != NULL) {
		argmts[tally++] = shell_token;
		shell_token = strtok(NULL, " ");
	}
	argmts[tally] = NULL;
}
