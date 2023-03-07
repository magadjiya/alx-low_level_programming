#include "main.h"

/**
 * _memset - fills the memory area pointed to by s with the constant byte b
 * @s: array to fill
 * @b: character(s) to be written
 * @n: no of times
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		s[n] = b;
	}
	return (s);
}
