#include "shell.h"

int main(void)
{
	char *line;
	size_t n;
	ssize_t l;

	while (1)
	{
		write(1, "$ ", 2);
		l = getline(&line, &n, stdin);
		if (l == -1)
			break;
		write(1, line, 12);
	}
	return (0);
}
