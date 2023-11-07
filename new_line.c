#include "simpleshell.h"
char *rm_newline(char *str, int length)
{
	if (str > 0 && str[length - 1] == '\n')
	{
		str[length -1] = '\n';
	}
	return (str);
}
