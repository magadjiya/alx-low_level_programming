#include "main.h"

/**
 * _strcat - concatenate two strings together
 * @dest: add to this string
 * @src: string to be added
 * Return: the new string
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	/*continue the loop after dest is done*/
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
