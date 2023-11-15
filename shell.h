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

char *_getline_sim(void);
int _strlen(char *s);
char *getline_simple(void);
char **token(char *ptr);
int cd_c(char **inf);
int help_c(char **inf);
int exit_c(char **inf);
int ctrlD_c(char **inf);
int _strcmp(char *s1, char *s2);
void execute(char *line, char **arr);
int _fork(char **inf, char **pn, char **env, char *ptr, int p_id, int ntest);
int _value_sim(char **arg, char **env);
void _getenv(char **env);
char *g_path(char **e);
char *_strcat(char *d, char *s);
char *_strcpy(char *d, char *s);
size_t _strcmp_n(char *s1, char *s2, size_t n);
void _getenv(char **env);
int builtins(void);

#endif
