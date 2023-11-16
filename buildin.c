#include "main.h"

/**
 * b_exit - Exit buildin
 * @com: Command
 * @n_put: User Input
 * Return: Void (Exit Statue)
 */

void  b_exit(char **com, char *n_put)
{
	int stat, a;

	if (com[1] == NULL)
	{
		f_all(com, n_put);
		exit(EXIT_SUCCESS);
	}
	for (a = 0; com[1][a]; a++)
	{
		if (_isalpha(com[1][a]) != 0)
		{
			perror("error");
			break;
		}
		else
		{
			stat = _atoi(com[1]);
			f_all(com, n_put);
			exit(stat);
		}
	}
}

/**
 * c_dir - Change Dirctorie
 * @com: Command
 * Return: 0 Succes 1 Failed (For Old Pwd Always 0 Case No Old PWD)
 */
int c_dir(char **com)
{
	int a = -1;

	if (com[1] == NULL)
		a = chdir(getenv("HOME"));
	else if (_strcmp(com[1], "-") == 0)
	{
		a = chdir(getenv("OLDPWD"));
	}
	else
		a = chdir(com[1]);

	if (a == -1)
	{
		perror("error");
		return (-1);
	}
	return (0);
}

/**
 * ctrld - builtin to handle "^D" call
 * @a: List of arg.
 * Return: Always returns 0, to terminate execution.
 */
int ctrld(char **a)
{
	(void)a;
	free(a);
	return (200);
}

/**
 * b_env - Display Enviromet
 * Return:Always 0
 */
int b_env()
{
	char **p = environ;

	while (*p != NULL)
	{
		write(STDOUT_FILENO, *p, _strlen(*p));
		write(STDOUT_FILENO, "\n", 1);
		p++;
	}
	return (0);
}


