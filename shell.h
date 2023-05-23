#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>

size_t my_strlen(const char *str);
void my_puts(char *str);
int my_putchar(char c);
char *my_strdup(char *str);
void my_isatty(void);
char *my_getenv(const char *name);
void my_sighandler(int _signum);
void *my_realoc(void *ptr, size_t size);
int my_strcmp(const char *s1, const char *s2);
int main(int argc, const char *argv[]);
int my_execve(char const *argv[]);
char *my_strcpy(char *dest, const char *source);
char *my_strpbrk(const char *string, const char *delim);
char *my_strtok(char *string, const char *delim);
int main(void);

#endif
