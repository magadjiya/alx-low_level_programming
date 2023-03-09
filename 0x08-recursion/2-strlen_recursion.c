#include "main.h"

/**
 * _strlen_recursion - lemgth of a string
 * @s: the string
 * Return: lemgth
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		++i;
		s++;
	}
	return (i + _strlen_recursion(s++));
}
