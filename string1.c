#include "main.h"

/**
 * _atoi - convert to a int
 * @s:string
 * Return:int
 */
int _atoi(char *s)
{
	int i, d, n, l, f, dig;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	dig = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (d % 2)
				dig = -dig;
			n = n * 10 + dig;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * _isalpha - Check if Alphabtic
 * @c: Character
 * Return: 1 If True
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _strcmp - Compares two strings
 * @str1: a string
 * @str2: Another string
 * Return: 0 if idintical
 *
 */

int _strcmp(char *str1, char *str2)
{
	int i = 0;
	int val;

	while (str1[i] != 0 && str2[i] != 0 && str1[i] == str2[i])
		i++;
	val = str1[i] - str2[i];
	return (val);
}
