#include "shell.h"
/**
 * _strlen - gets size of string input
 * @s: the string should be to measure
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
		;
	return (x);
}
