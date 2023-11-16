#ifndef _main_H_
#define _main_H_

#define BUFSIZE 1024

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>
#include <stddef.h>

extern char **environ;

void prmo(void);
int main(void);
char *_strdup(char *str);
int _strncmp(const char *str1, const char *str2, size_t n);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *str);
char **token(char *n_put);
int fork_fun(char **tok, char *n_put);
int b_env();
int ctrld(char **a);
int c_dir(char **com);
void b_exit(char **com, char *n_put);
int _atoi(char *s);
int _isalpha(int c);
char *_getline();
char *_getenv(char *env);
int _strcmp(char *str1, char *str2);
int h_builtin(char **com);
void f_all(char **a, char *b);
int builtins(char **com);
char *build(char *tok, char *v);
int g_path(char **cmd);
char *_strcat(char *d, char *s);
char *_stcpy(char *d, char *s, int n);

/**
 * struct bulltin - contain bultin to handle
 * @co:pointer
 * @f:fun to excute
 */

typedef struct  bulltin
{
	char *co;
	int (*f)(char **p);
} b_t;
#endif
