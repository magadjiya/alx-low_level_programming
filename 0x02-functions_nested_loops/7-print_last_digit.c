#include "main.h"

/**
 * print_last_digit - function that returns the last digit of a set of integers
 * @n: number(s) inputted
 * Return: last
*/
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = -1 * last;
	}
	_putchar(last + 48);
	return (last);
}
