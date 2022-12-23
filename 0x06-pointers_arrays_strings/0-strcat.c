#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first string
 * @src: second string to be appended
 * Return: char
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	if (dest[i] != '\0')
	{
		for (i = 0; dest[i] != '\0'; i++)
		{
			_putchar(dest[i]);
		}
		if (dest[i] == '\0')
		{
			for (j = 0; src[j] <= '\0'; j++)
			{
				_putchar(src[i]);
			}
		}
	}
	_putchar('\n');
	return (dest);
}
