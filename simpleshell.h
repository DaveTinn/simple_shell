#ifndef SIMPLESHELL_H
#define SIMPLESHELL_H
#define MAX_ARG 64
#define MAX_INPUT_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

void show_ourPrompt(void);
void shell_tokenizer(char *shell_inp, char **argmts);
void handling_ls_command(char **cmd_argmts);
void rm_newline(char *str, size_t length);
void perform_command(char *commnd, char **argmts, char **env);
#endif
