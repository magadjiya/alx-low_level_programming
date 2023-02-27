#include "main.h"

/**
 * _strlen - calculate length of string
 * @s: provided string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i, length;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
