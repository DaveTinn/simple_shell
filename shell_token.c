#include "simpleshell.h"
/**
 * shell_tokenizer - Tokenizes a shell input string into an array of arguments.
 *
 * This function uses the strtok function to split the input string into
 * individual tokens using space (' ') as the delimiter. The resulting
 * tokens are stored in the provided array of arguments. The last element
 * of the array is set to NULL to signify the end of arguments.
 *
 * @shell_inp: The input string to tokenize.
 * @argmts: The array to store the resulting tokens.
 *
 * Return: Nothing
 */
void shell_tokenizer(char *shell_inp, char **argmts)
{
	int tally = 0;
	char *shell_token = strtok(shell_inp, " ");

	while (shell_token != NULL)
	{
		argmts[tally++] = shell_token;
		shell_token = strtok(NULL, " ");
	}
	argmts[tally] = NULL;
}
