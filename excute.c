#include "shell.h"

void execmd(char *line, char **arr)
{
	pid_t id;

	id = fork();

	if (id == 0)
	{
		execve(line, arr, NULL);
	}
	else
	{
		wait(NULL);
	}
}
