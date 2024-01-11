#include "main.h"

/**
 * _strlen_recursion - length of string using recursion
 * @s: the string
 * Return: length of string in a number
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
