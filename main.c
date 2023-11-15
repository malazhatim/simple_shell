#include "shell.h"
/**
 * main - argment function
 * @ac : count of argument
 * @argv: argument
 * Return: always 0
 */
int main(int ac, char **argv)
{
	char *line = NULL, *line_copy = NULL;
	int i;
	size_t n;
	ssize_t l;
	const char *delim = "\n";
	int n_token = 0;
	char *token;

	(void)ac;

	while (1)
	{
		write(1, "$ ", 2)
		l = getline(&line, &n, stdin);
		if (l == -1)
		{
			write(1, "\n", 2);
		}
		line_copy = malloc(sizeof(char) * (l));

		if (line_copy == NULL)
		{
			perror("tsh: memory error");
			return (-1);
		}
		strcpy(line_copy, line); /** copy line to line copy*/
		token = strtok(line, delim);

		while (token != NULL)
		{
			n_token++;
			token = strtok(NULL, delim);
		}
		n_token++;

		argv = malloc(sizeof(char *) * (n_token));
		token = strtok(line_copy, delim);
		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(token));
			strcpy(argv[i], token);
			token = strtok(NULL, delim);
		}
		argv[i] = NULL;
		execute(argv);
	}
	free(line_copy);
	free(line);
	return (0);
}

