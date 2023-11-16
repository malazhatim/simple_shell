#include "main.h"

/**
 * builtins - check builtin command to handle
 * @com:command to check
 * Return: 0 Succes -1 Fail
 */
int builtins(char **com)
{
	b_t bult[] = {
		{"cd", NULL},
		{"env", NULL},
		{"^D", NULL},
		{NULL, NULL}
	};
	int a = 0;

	do {
		if (_strcmp(com[0], (bult + a)->co) == 0)
			return (0);
		a++;
	}
		while ((bult + a)->co);
	return (-1);
}

/**
 * h_builtin - Handle Builtin Command
 * @com: Parsed Command
 * Return: -1 Fail 0 Succes (Return :Excute Builtin)
 */

int h_builtin(char **com)
{
	 b_t bult[] = {
		{"cd", c_dir},
		{"env", b_env},
		{"^D", ctrld},
		{NULL, NULL}
	};
	int a = 0;

	do {
		if (_strcmp(com[0], (bult + a)->co) == 0)
		{
			return ((bult + a)->f(com));
		}
		a++;
	}
		while ((bult + a)->co);
	return (-1);
}

/**
 * f_all - Free Array
 * @a:Array Pointer
 * @b:Char Pointer
 * Return: Void
 */
void f_all(char **a, char *b)
{
	free(a);
	free(b);
}

/**
 * _strcat - concatenates two strings
 * @d: string to append to
 * @s: string to add
 * Return: a pointer to the resulting string
 */
char *_strcat(char *d, char *s)
{
	int e = 0, h = 0;

	while (d[e] != '\0')
		e++;

	while (s[h] != '\0')
	{
		d[e] = s[h];
		h++;
		e++;
	}

	d[e] = '\0';

	return (d);
}

/**
 * _stcpy - Copy Byte From Source To Destination
 * @d: Destination Pointer
 * @s: Source Pointer
 * @n: Size (How Much You Will Copy)
 *Return: Void Pointer
 */
char *_stcpy(char *d, char *s, int n)
{
	int f = 0;

	while (f < n)
	{
		d[f] = s[f];
		f++;
	}
	return (d);
}
