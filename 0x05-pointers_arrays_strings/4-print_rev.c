#include "main.h"

/**
 * print_rev - function that prints the reversed version of an array
 * @s: pointer to array
 * Return: Void
*/
void print_rev(char *s)
{
	int i = 0, reverse;

	while (s[i] != '\0')
	{
		i++;
	}

	for (reverse = i - 1; reverse >= 0; reverse--)
	{
		_putchar(s[reverse]);
	}
	_putchar('\n');
}
