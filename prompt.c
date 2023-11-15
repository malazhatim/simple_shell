#include "main.h"

/**
 * prmo - print the shell prompt
 */
void prmo(void)
{
	char *i = "$ ";

	write(1, &i, sizeof(i));
}
