#include "simpleshell.h"
/**
 * rm_newline - Removes the newline character from the end of a string.
 *
 * This function checks if the last character of the string is a newline
 * character ('\n') and, if so, replaces it with a null terminator ('\0').
 *
 * @str: The string to remove the newline from.
 * @length: The length of the string.
 *
 * Return: Nothing
 */
void rm_newline(char *str, size_t length)
{
	if (str[length - 1] == '\n')
	{
		str[length - 1] = '\0';
	}
}
