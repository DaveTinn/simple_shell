#include "simpleshell.h"
int main(void)
{
	char sh_commnd[1024];

	while (1)
	{
		show_our_prompt();
		retrv_user_input(sh_commnd, sizeof(sh_commnd));
		inv_sh_commnd(sh_commnd);
	}
	return (0);
}
