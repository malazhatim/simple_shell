#include "main.h"

/**
 * f_all - Free
 * @ar:Array Pointer
 * @p:Char Pointer
 * Return: Void
 */
void f_all(char **ar, char *p)
{
	free(ar);
	free(p);
	ar = NULL;
	p = NULL;
}

/**
 * h_builtin - Handle Builtin Command
 * @com:  Command
 * Return: -1 Fail 0 Succes (Return :Excute Builtin)
 */

int h_builtin(char **com)
{
	 b_t b_in[] = {
		{"cd", c_dir},
		{"env", b_env},
		{"^D", ctrld},
		{NULL, NULL}
	};
	int a = 0;

	do
	{
		if (_strcmp(com[0], (b_in + a)->co) == 0)
		{
			return ((b_in + a)->f(com));
		}
	}
	while ((b_in + a)->co);
	return (-1);
}

/**
 * builtins - check the builtin command
 * @com:command to check
 * Return: 0 Succes -1 Fail
 */
int builtins(char **com)
{
	b_t bult[] = {
		{"cd", NULL},
		{"exit", NULL},
		{"^D", NULL},
		{"env", NULL},
		{NULL, NULL}
	};
	int a = 0;

	do
	{
		if (_strcmp(com[0], (bult + a)->co) == 0)
			return (0);
	}
	while ((bult + a)->co);
	return (-1);
}
