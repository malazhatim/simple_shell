#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

int main(int ac, char **argv);
void execute(char **argv);
int _strlen(char *s);
char *_strcpy(char *d, char *s);
int _strcmp(char *s1, char *s2);


#endif
