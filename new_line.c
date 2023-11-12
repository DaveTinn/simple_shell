#include "simpleshell.h"
void rm_newline(char *str, size_t length)
{
	if (length > 0 && str[length - 1] == '\n')
	{
		str[length -1] = '\0';
	}
}
