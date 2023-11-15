#include "main.c"

/**
* _getline - Read user input
* Return: Input
*/
char *_getline()
{
int a = 0;
int buff = BUFSIZE;
char c = 0;
char *b = malloc(buff);
int d;

	while (c != EOF && c != '\n')
	{
		d = read(STDIN_FILENO, &c, 1);
		if (d == 0)
		{
			free(b);
			exit(EXIT_SUCCESS);
		}
		b[a] = c;
		if (b[0] == '\n')
		{
			free(b);
			return ("\0");
		}
		a++;
	}
	b[a] = '\0';
	return (b);
}

