#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	/**
	 * this is not called upon
	 * till the above func has
	 * recursively ended, then
	 * it prints from the last char
	 */
	_putchar(*s);
}
