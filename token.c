#include "main.h"

/**
 * token- tokenize Line Of Input
 * @n_put:User Input
 * Return: Array Of Char
 */
char **token(char *n_put)
{
	int buff = BUFSIZE;
	char **a = malloc(sizeof(char *) * buff);
	char *b = strtok(n_put, "\t\r\n\a ");
	int c = 0;

	if (n_put == NULL)
		return (NULL);
	if (!b)
	{
		return (NULL);
	}
	while (b)
	{
		a[c] = b;
		b = strtok(NULL, "\t\r\n\a ");
		c++;
	}
	a[c] = NULL;
	return (a);
}
