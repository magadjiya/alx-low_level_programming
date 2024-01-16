#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate length of a string
 * @s: the string
 * Return: the length w/o '\0'
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - allocate space for a concatenated string
 * @s1: the first string
 * @s2: the second string to be added
 * Return: pointer to address of both strings
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length = _strlen(s1) + _strlen(s2);
	ptr = malloc(sizeof(char) * length + 1);

	if (ptr != NULL)
	{
		i = 0;
		while (i < _strlen(s1))
		{
			ptr[i] = s1[i];
			i++;
		}

		j = 0;
		while (j < _strlen(s2))
		{
			/* add j to the length of the other string */
			/* this ensures it always gives the required space */
			ptr[_strlen(s1) + j] = s2[j];
			j++;
		}
		ptr[length] = '\0';
	}
	else
		return (NULL);

	return (ptr);
}
