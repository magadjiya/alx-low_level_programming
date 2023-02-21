#include "main.h"
/**
 * print_last_digit - returns the last digit of an integer
 * @i: integer whose last digit is returned
 * Return: i
 */
int print_last_digit(int i)
{
	int last_digit;

	if (i < 0 || i == 40)
		i = i * -1;
	last_digit = i % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
