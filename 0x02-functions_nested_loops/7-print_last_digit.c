#include "main.h"

/**
 * print_last_digit - function that returns the last digit of a set of integers
 * @n: number(s) inputted
 * Return: last
*/
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = -1 * n;
		last = n % 10;
		_putchar(last + 48);
	}
	else
	{
		last = n % 10;
		_putchar(last + 48);
	}
	return (last);
}
