#include "shell.h"

void execute(char **argv)
{
	char *com = NULL;

	if (execve(com, argv, NULL) == -1)
	{
		perror("no succsed");
	}
}
