#include "main.h"
/**
 * print_sign - print for positive, negative and 0 ints
 * @n: integer to be checked
 * Return: 1 if +, 0 if 0, -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
