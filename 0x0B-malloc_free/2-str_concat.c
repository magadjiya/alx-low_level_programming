#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return length of a string
 * @s: the string
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: string to be added
 * Return: pointer to new space
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, len1, len2;
	char *ptr;

	/*define NULL behavior first then cal strlen*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	ptr = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0, k = 0; i < len1; i++, k++)
		ptr[k] = s1[i];
	for (j = 0; j < len2; j++, k++)
		ptr[k] = s2[j];
	k++;
	ptr[k] = '\0';
	return (ptr);
}
