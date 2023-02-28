#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int l, length;

	length = 0;
	while (str[length] != '\0')
		length++;

	l = length / 2;
	for (l = l; l <= length - 1; l++)
		_putchar(str[l]);
	_putchar('\n');
}
