#include "main.h"

/**
 * print_most_numbers - putchar 0-9 without 2 & 4
 *
 * Retun: Void
*/
void print_most_numbers(void)
{
	int n;
	int f = 2, l = 4;

	for (n = 0; n <= 9; n++)
	{
		if (n == l || n == f)
		{
			continue;
		}
		_putchar(n + 48);
	}
	_putchar('\n');
}
