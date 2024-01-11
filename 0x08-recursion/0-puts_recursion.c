#include "main.h"

/**
 * _puts_recursion - print string using recursion, terminate with a newline
 * @s: the string provided
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
