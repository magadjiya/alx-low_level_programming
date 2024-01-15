#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a ptr to space with a copy of a string
 * @str: the string
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	ptr = malloc(sizeof(char) * length + 1);
	if (ptr != NULL)
	{
		for (i = 0; i < length; i++)
			ptr[i] = str[i];
		ptr[length] = '\0';
	}
	else
		return (NULL);

	return (ptr);
}
