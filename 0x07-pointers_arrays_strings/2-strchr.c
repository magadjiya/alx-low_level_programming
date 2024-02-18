#include "main.h"

/**
 * _strchr - find a character in a string
 * @s: the string
 * @c: the character to find
 * Return: the remaining string starting from c
 */
char *_strchr(char *s, char c)
{
	int i, j;
	int length = _strlen(s);
	int rlength;
	char *rs;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
		{
			rlength = (length - i) + 1; /* length of remaining chars */

			rs = malloc(rlength * sizeof(char));
			if (rs == NULL)
			{
				free(rs);
				return (NULL);
			}

			j = 0;
			while (j < rlength)
			{
				rs[j] = s[i];
				j++;
				i++;
			}
			return (rs);
		}
		i++;
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
