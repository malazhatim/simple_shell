#include "shell.h"
/**
 * main - argment function
 * Return: always 0
 */
int main(void)
{
	char *line;
	int i;
	size_t n;
	ssize_t l = 0;
	char **arr = NULL;
	char *token;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "$ ", 2);
		l = getline(&line, &n, stdin);
		if (l == -1)
		{
			write(1, "\n", 2);
			break;
		}
		token = strtok(line, "\n\t");
		arr = malloc(20);
		while (token != NULL)
		{
			arr[i] = token;
			token = strtok(NULL, "\n\t");
			i++;
		}
		arr[i] = NULL;
		execute(line, arr);
	}
	free(line);
	return (0);
}

