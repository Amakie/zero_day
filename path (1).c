#include "shell.h"

/**
 * my_getenv - function that gets environment variable
 * @name: environment varaible name
 *
 * Return: NULL if there is no match
 */
char *my_getenv(const char *name)
{
	extern char **environ;
	char **envp = environ;
	
	while (*envp)
	{
		if (my_strcmp(*envp, name) == 0)
			return (*envp + my_strlen(name) + 1);
	}
		envp++;

	return (NULL);
}



#include "shell.h"

/**
 * my_execve - executes a command
 * @argv: argument vector, array
 *
 * Return: nothing on success, else -1 on failure
 */
int my_execve(char const **argv)
{
	pid_t pid;
	int value;

	pid = fork();

	if (pid == -1)
	{
		perror("fork unsuccessful");
		return (-1);
	}
	if (pid == 0)
	{
		execve("/bin/ls", (char *const *)argv, NULL);
	}
	else
	{
		wait(&value);
		if (value == -1)
			perror("execve unsuccessful");
	}

	free(argv);

	return (0);
}

