#ifndef SIMPLESHELL_H
#define SIMPLESHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int show_ourPrompt(void);
char *rm_newline(char *str, int length);
int shell_tokenizer(char *shell_cmd, char args[]);
int perform_commd(char *args[]);
#endif
