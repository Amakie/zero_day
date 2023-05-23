#include "shell.h"

/**
 * my_strlen - customised function to determine string length
 * @str: string
 * Return: length of string
 */
size_t my_strlen(const char *str)
{
	size_t len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * my_puts - prints string to a console
 * @str: string to be printed
 *
 * Return: Nothing
 */
void my_puts(char *str)
{
	int i;

	for (i = 0; i < str[i]; i++)
	{
		my_putchar(str[i]);
	}

}
/**
 * my_putchar - customized putchar function
 * @c: character
 * Return: (1)
 */
int my_putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * my_strcmp - compares strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: less s1 less s2
 */
int my_strcmp(const char *s1, const char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

/**
 * my_strdup - duplicates a string
 * @str: pointer to a string
 *
 * Return: NULL if insufficient memory
 */
char *my_strdup(char *str)
{
	int i, j;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	new_str = malloc(sizeof(char) * j + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		new_str[i] = str[i];
	}
	new_str[j] = str[j];

	free(new_str);

	return (new_str);
}
