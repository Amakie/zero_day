#include "shell.h"

/**
 * my_sighandler - handles CTRL C
 * @_signum: integer that identies signal you want to control
 *
 */
void my_sighandler(int _signum)
{
	if (_signum == SIGINT)
	{
		my_puts("\ncisfun$ ");
	}
}

/**
 * my_EOF - handles CTRL D
 * @result: value of the line
 * @buffer: buffer
 *
 */
void my_EOF(int result, char *buffer)
{
	void(buffer);

	if (result == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			my_puts("\n");
			free(buffer);
		}
		exit(0);
	}
}

/**
 * my_isatty - determines whether file descriptor is in terminal
 */
void my_isatty(void)
{
	if (isatty(STDIN_FILENO))
	{
		my_puts("cisfun$ ");
	}
}

/**
 * main - shell function
 *
 * Return: 0
 */
int main(void)
{

	size_t(n) = 0;
	ssize_t num_char;
	char *lineptr;
	const char *delim = " ";
	int number_tokens = 0;
	char *token;

	while (1)
	{
		my_sighandler;
	}

	num_char = getline(&lineptr, &n, stdin);

	token = my_strtok(lineptr, delim);

	while (token != NULL)
	{
		number_tokens++;
		token = my_strtok(NULL, delim);
	}

	if (num_char == -1)
	{
		my_puts(" exit shell\n");
		return (-1);
	}
	my_puts("%s\n", lineptr);
	}

	if (my_execve < 0)
	{
		perror("execute command not found");
		return (-1);
	}

	return (0);
}
