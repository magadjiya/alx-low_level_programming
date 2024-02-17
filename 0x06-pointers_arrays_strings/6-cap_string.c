#include "main.h"

/**
 * cap_string - capitilize all words of a string
 * @s: the string
 * Return: the new capitalized string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && _islower(s[i]))
			s[i] -= 32; /* diff btw upper and lowercase ascii chars */
		if (isSep(s[i]))
		{
			i++;
			if (_islower(s[i]))
				s[i] -= 32;
			/* In case of double sep instances */
			else if (isSep(s[i]))
			{
				i++;
				if (_islower(s[i]))
					s[i] -= 32;
			}
		}
		i++;
	}

	return (s);
}

/**
 * isSep - checks if its a valid seperator
 * @c: accepts a valid seperator
 * Return: 1 if Valid, 0 if not
 */
int isSep(char c)
{
	int i;
	char a[7] = {' ', '\t', '\n', ',', ';', '.', '!'};
	char a1[7] = {' ', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (i < 7)
	{
		if (c == a[i] || c == a1[i])
			return (1);
		i++;
	}

	return (0);
}

/**
 * _islower - checks if a character is lowercase
 * @c: character to be checked
 * Return: 1 if true, 0 is false
 */
int _islower(int c)
{
	/* 'a' to 'z' */
	if (c >= 97 && c <= 127)
		return (1);
	return (0);
}
