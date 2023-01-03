#include "main.h"

/**
 * _strchr - checks for a character in string
 * @s: string to be checked
 * @c: character to check for
 * Return: pointer to c, NULL if not found
*/
char *_strchr(char *s, char c)
{
	/*dereference s to loop through it*/
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
