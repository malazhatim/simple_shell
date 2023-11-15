#include "main.h"


/**
 * g_ path - path
 * @com:  Input
 * Return: 1  Failure  0  Success.
 
int g_path(char **com)
{
	char *p = _getenv("PATH");
	char *v = _strtok(p, ":");
	char *m;
	struct stat b;

	while (v != NULL)
	{
		m = build(*com, v);
		if (stat(m, &buff) == 0)
		{
			*com = _strdup(m);
			free(cmd_path);
			free(path);
			return (0);
		}
		free(cmd_path);
		value = _strtok(NULL, ":");
	}
	free(path);

	return (1);
}*/
