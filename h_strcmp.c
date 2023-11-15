#include "shell.h"

/**
 * _strcmp - compredion between two string
 * @s1: string one
 * @s2: string two
 * Return: mul
 */
int _strcmp(char *s1, char *s2)
{
	int x;
	int mul;

	while (s1[x] != 0 && s2[x] != 0 && s1[x] == s2[x])
		x++;
	mul = s1[x] - s2[x];

	return (mul);
}

/**
 *_strcmp_n -  function that compares two strings.
 *@s1: string one
 *@s2: string two
 *@n: number of characters
 * Return: diference
 */

size_t _strcmp_n(char *s1, char *s2, size_t n)
{
	size_t a, b;

	for (b = 0; s1[b] != '\0' && b < n; b++)
	{
		a = s1[b] - s2[b];

		if (a != 0)
		{
			return (a);
		}
	}
	return (0);
}
