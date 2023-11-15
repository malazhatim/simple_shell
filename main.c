#include "main.h"

/**
 * main - Simple Shell
 * Return: Exit Value By Status
 */

int main(void)
{
	char *u_in, **com, bul;
	int coun = 0, stat = 1;
	(void) bul;

	while (stat)
	{
		coun++;

			prmo();
		u_in = _getline();
		com = token(u_in);
		if (_strcmp(com[0], "exit") == 0)
		{
			b_exit(com, u_in);
		}
		else if (builtins(com) == 0)
		{
			bul = h_builtin(com);
			f_all(com, u_in);
			continue;
		}
		else
		{
			bul = fork_fun(com, u_in);

		}
		f_all(com, u_in);
	}
	return (stat);
}
