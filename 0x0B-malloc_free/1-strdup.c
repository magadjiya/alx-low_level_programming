#include "main.h"
#include <stdlib.h>
/**
 * _strlen - length of a string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strdup - points to a string and copies it to heap
 * @str: the string
 * Return: memory location
 */
char *_strdup(char *str)
{
	int i;
	int n = _strlen(str) + 1;
	char *space;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		space = malloc(sizeof(char) * n);
		for (i = 0; i <= n; i++)
		{
			space[i] = str[i];
		}
		/*free(space);*/
	}
	return (space);
}
