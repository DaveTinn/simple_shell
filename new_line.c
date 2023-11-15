#include "simpleshell.h"
/**
 * rm_newline - removes new line
 * @str: pointer to a char data type
 * @length: length of string
 * Return: Nothing
 */
void rm_newline(char *str, size_t length)
{
	if (str[length - 1] == '\n')
	{
		str[length - 1] = '\0';
	}
}
