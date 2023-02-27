#include "main.h"

/**
 * print_rev - reverse a sentence
 * @s: sentence to be reversed
 */
void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	while (s[length] >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
