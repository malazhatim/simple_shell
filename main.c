#include "main.h"

/**
 * main - Simple Shell
 * a:num
 * *u_in: user input
 * **com:toknizer
 * Return: Exit Value By Status
 */

int  main(__attribute__((unused))int a, char **com, char **u_in)
{
	char bul;
	int coun = 0, stat = 1;
	(void) bul;

	while (stat)
	{
		coun++;
		if (isatty(STDIN_FILENO) == 1)
		{
			write(1, "$ ", sizeof("$ "));
		u_in = _getline();
		com = token(u_in);
		}
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
