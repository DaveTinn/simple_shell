#include "simpleshell.h"
#include <stdio.h>
int show_ourPrompt(void)
{
	size_t num = 0;
	char *temp_store, *_instruct, *args[MAX_ARG];
	int store_size, arg_tally;

	temp_store = NULL;
	store_size = getline(&temp_store, &num, stdin);
	if (store_size == -1)
	{
		if (feof(stdin));
		{
			free(temp_store);
			exit(0);
		}
		else
		{
			perror("Cannot show input");
			free(temp_store);
		}
	}
	_instruct = rm_newline(temp_store, store_size);
	arg_tally = shell_tokenizer(shell_cmd, args);
	perform_commd(args);
	free(temp_store);
	return (store_size);
}
