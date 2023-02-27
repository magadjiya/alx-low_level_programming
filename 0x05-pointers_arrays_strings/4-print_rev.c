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
	/*-1 because it leaves spaces for a random char*/
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
