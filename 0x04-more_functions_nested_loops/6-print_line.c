#include "main.h"

/**
 * print_line - print _ n number of times
 *
 * @n: number of times to be printed
 *
 * Return: Void
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
