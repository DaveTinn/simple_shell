#include "simpleshell.h"
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
