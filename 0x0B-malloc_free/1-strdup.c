#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - gives a ptr to a space in memory that has a copy of a given str
 * @str: the string
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	/*add one to make space for null terminator*/
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		ptr[j] = str[j];

	return (ptr);
	free(ptr);
}
