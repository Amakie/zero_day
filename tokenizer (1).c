#include "shell.h"

/**
 * my_realoc - reallocates memory block
 * @ptr: previous pointer
 * @size: allocates new memory block
 *
 * Return: NULL if reallocation fails
 */
void *my_realoc(void *ptr, size_t size)
{
	char *src, *dest;
	(char)*ptr;
	(char)*new_ptr;
	size_t i = 0;

	if (size == 0)
	{
	free(ptr);
	return (NULL);
	}

	void *new_ptr = malloc(size);

	if (!new_ptr)
	{
		return (NULL);
	}

	if (ptr)
	{
	src = ptr;
	dest = new_ptr;

	while (i < size)
	{
		i++;
		dest[i] = src[i];
	}

	free(ptr);
	}

	return (new_ptr);
}


/**
 * my_tokenizer - splits a string
 * @string: string to be splitted
 * @delim: deliminator
 *
 * Return: pointer array
 */
char **my_tokenizer(char *string, const char delim)
{
	int w_n, i;
	char *str_copy;
	char *token;
	char **arr;

	str_copy = malloc(my_strlen(string) + 1);
	if (str_copy == NULL)
	{
		perror(my_getenv("_"));
		return (NULL);
	}

	for (i = 0; i < string[i]; i++)

	str_copy[i] = '\0';

	token = strtok(str_copy, delim);
	arr = malloc((sizeof(char *) * 2));
	arr[0] = my_strdup(token);

	w_n = 4;
	i = 1;

	while (token != NULL)
	{
		token = strtok(NULL, delim);
		arr = my_realoc(arr, (sizeof(char *) * (w_n - 1)), (sizeof(char *) * w_n));
		arr[i] = my_strdup(token);
		i++;
		w_n++;
	}
	free(str_copy);
	free(arr);

	return (arr);
}

