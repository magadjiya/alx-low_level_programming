#include "main.h"

/**
 * print_rev - reverse a sentence
 * @s: sentence to be reversed
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (i = i; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
