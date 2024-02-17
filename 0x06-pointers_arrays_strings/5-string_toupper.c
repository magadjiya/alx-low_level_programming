#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @s: the string to change
 * Return: a string completely in CAPITAL letters
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (_islower(s[i]))
			s[i] += 32; /* ASCII difference btw capital & small letters */
		i++;
	}

	return (s);
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
