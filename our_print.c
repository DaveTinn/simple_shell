#include "simpleshell.h"
/**
 * our_printf - function to display prompt
 * @prompt_msg: message to display as prompt
 * Return: Nothing
 */
void our_printf(const char *prompt_msg)
{
	write(STDOUT_FILENO, prompt_msg, strlen(prompt_msg));
}
