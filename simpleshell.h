#ifndef SIMPLESHELL_H
#define SIMPLESHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>

void show_our_prompt(void);
void retrv_user_input(char* inp_comm, size_t size);
void inv_sh_commnd(const char *sh_command);
void our_printf(const char *prompt_msg);
#endif
