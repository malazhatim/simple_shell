#include "main.h"

/**
 * g_path - get path
 * @com: Input
 * Return: 1  Failure  0  Success.
 */
int g_path(char **com)
{
	char *p =  _getenv("PATH");
	char *v = strtok(p, ":");
	char *c_p;
	struct stat buff;

	do {
		c_p = build(*com, v);
		if (stat(c_p, &buff) == 0)
		{
			*com = _strdup(c_p);
			free(c_p);
			free(p);
			return (0);
		}
		free(c_p);
		v = strtok(NULL, ":");
	}
		while (v != NULL);
	free(p);

	return (1);
}
/**
 * build - Build Command
 * @tok: Excutable Command
 * @v: Dirctory Conatining Command
 * Return: Parsed Full Path Of Command Or NULL Case Failed
 */
char *build(char *tok, char *v)
{
	char *com;
	size_t a;

	a = _strlen(v) + _strlen(tok) + 2;
	com = malloc(sizeof(char) * a);
	if (com == NULL)
	{
		return (NULL);
	}

	memset(com, 0, a);

	com = _strcat(com, v);
	com = _strcat(com, "/");
	com = _strcat(com, tok);

	return (com);
}
