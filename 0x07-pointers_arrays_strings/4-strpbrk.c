#include "main.h"

/**
 * _strpbrk - searches for the first instance of chars in accept within s
 * @s: string to search through
 * @accept: set of bytes/chars to look for
 * Return: the remaining string once a char in accept is found in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b, len, rlen, len2;
	char *rest;

	len = _strlen(s);
	len2 = _strlen(accept);
	a = 0;
	while (a < len)
	{
		b = 0;
		while (b < len2)
		{
			if (accept[b] == s[a])
			{
				rlen = len - a;

				rest = malloc(rlen * sizeof(char));
				if (rest == NULL)
				{
					free(rest);
					return (NULL);
				}

				b = 0;
				while (b < rlen)
				{
					rest[b] = s[a];
					b++;
					a++;
				}
				return (rest);
			}
			b++;
		}
		a++;
	}

	return (NULL);
}

/**
 * _strlen - length of a string
 * @s: the string
 * Return: its length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
