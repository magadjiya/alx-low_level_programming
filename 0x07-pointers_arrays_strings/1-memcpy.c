#include "main.h"

/**
 * _memcpy - copies memory are src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}
