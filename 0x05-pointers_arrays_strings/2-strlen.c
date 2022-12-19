#include "main.h"

/**
 * _strlen - function thats returns the length of a string
 * @s: string/array argumemt
 * Return: i - number of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

