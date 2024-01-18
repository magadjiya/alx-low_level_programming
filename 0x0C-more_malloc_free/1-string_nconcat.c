#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: the string
 * Return: length excluding terminating null char
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
 * string_nconcat - concatenates 2 strings, n bytes of 2nd dtring to 1st
 * @s1: first string
 * @s2: second string
 * @n: no of bytes for s2
 * Return: pointer to allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1;
	char *ptr;

	len1 = _strlen(s1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(sizeof(*ptr) * len1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	if ((int)n < _strlen(s2))
		ptr = realloc(ptr, len1 + n + 1);
	else
		ptr = realloc(ptr, _strlen(s2) + 1);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	j = 0;
	while (j < n && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
