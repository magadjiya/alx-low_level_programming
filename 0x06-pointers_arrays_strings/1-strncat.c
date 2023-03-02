#include "main.h"

/**
 * _strncat - concatenate two strings n bytes
 * @dest: string to be added to
 * @src: string to be added
 * @n: number of characters to be added from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	for (y = 0; y < n && src[y] != '\0'; y++, x++)
		dest[x] = src[y];
	dest[x] = '\0';
	return (dest);
}
