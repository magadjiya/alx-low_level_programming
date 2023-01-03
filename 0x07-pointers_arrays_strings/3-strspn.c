#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: source string
 * @accept: bytes to be checked for in string
 * Return: length
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ') /*dont add whitespaces*/
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i])
					length++;
			}
		}
		else
			return (length);
	}
	return (length);
}
