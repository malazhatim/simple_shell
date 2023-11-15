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
		return (1);
	}

	if (pid == -1)
	{
		return (-1);
	}

	if (pid == 0)
	{
		if (execve(*tok, tok, environ) == -1)
		{
			perror("Error");
			free(n_put);
			free(tok);
			exit(EXIT_FAILURE);
		}
		/**else
		{
			path_cmd(cmd);
		}
		return (EXIT_SUCCESS);*/
	}
	wait(&stat);
	return (0);
}
