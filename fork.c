#include "main.h"

/**
 * fork_fun- fork Simple Shell Command
 * @tok:Parsed Command
 * @n_put: User Input
 * Return: 1 Case Command Null -1 Wrong Command 0 Command Excuted
 */
int fork_fun(char **tok, char *n_put)
{
	int stat;
	pid_t pid = fork();

	if (*tok == NULL)
	{
		return (-1);
	}

	if (pid == -1)
	{
		return (-1);
	}

	if (pid == 0)
	{
		if (_strncmp(*tok, "./", 2) != 0 && _strncmp(*tok, "/", 1) != 0)
		{
			g_path(tok);
		}
		if (execve(*tok, tok, environ) == -1)
		{
			perror("Error");
			f_all(tok, n_put);
			exit(EXIT_FAILURE);
		}
		else
		{
		return (EXIT_SUCCESS);
		}
	}
	wait(&stat);
	return (0);
}
