#include "shell.h"

/**
 * _strcpy - copies a string
 * @d: the destination
 * @s: the source
 * Return: pointer to destination
 */
char *_strcpy(char *d, char *s)
{
	int a = 0;

	if (d == s || s == 0)
		return (d);
	while (s[a])
	{
		d[a] = s[a];
		a++;
	}
	d[a] = 0;
	return (d);
}
