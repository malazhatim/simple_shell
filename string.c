#include "main.h"

/**
 * *_strdup - copies  A Strings
 * @str: the strings
 * Return: the copied string
 */
char *_strdup(char *str)
{
	size_t a = _strlen(str);
	char *s2 = malloc(sizeof(char) * (a + 1));
	size_t b = 0;

	if (!*s2)
	{
		return (NULL);
	}

	while (b <= a)
	{
		s2[b] = str[b];
		b++;
	}

	return (s2);
}

/**
 * _strncmp - Compare number Of Characters
 * @str1: String1.
 * @str2: String2.
 * @n: number Of Characters.
 * Return: 1 If The Strings Don't Match Otherwise 0
 */
int _strncmp(const char *str1, const char *str2, size_t n)
{
	size_t a = 0;

	while (a < n && str2[a])
	{
		if (str1[a] != str2[a])
		{
			return (1);
			a++;
		}
	}

	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - returns the length of a string
 * @str: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
