#include "main.h"

/**
 * _getenv - Gets The Value Of Enviroment
 * @env: Environmen
 * Return: The Value of the Environment.
 */
char *_getenv(char *env)
{
	size_t a = _strlen(env);
	size_t b;
	char *c;
	int d = 0;

	while (environ[d])
	{
		if (_strncmp(env, environ[d], a) == 0)
		{
			b = _strlen(environ[d]) - a;
			c = malloc(sizeof(char) * b);
			if (!c)
			{
				free(c);
				return (NULL);
			}

			return (c);
		}
	}
	return (NULL);
}
