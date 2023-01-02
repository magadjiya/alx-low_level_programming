#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string that will be changed
 * @b: character that will replace
 * @n: no of times to replace character
 * Return: byte
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*loop n times over s and set it to b*/
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
