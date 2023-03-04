#include "main.h"

/**
 * _strncpy - copy a string from dest to src
 * @dest: string to copy to
 * @src: string to copy
 * @n: number of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
