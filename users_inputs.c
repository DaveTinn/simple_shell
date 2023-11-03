#include "simpleshell.h"
void retrv_user_input(char* inp_comm, size_t size)
{
	if (fgets(inp_comm, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			our_printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			our_printf("Error\n");
			exit(EXIT_FAILURE);
		}
	}
	inp_comm[strcspn(inp_comm, "\n")] = '\0';
}
