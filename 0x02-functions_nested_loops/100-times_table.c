#include "main.h"
/**
 * print_times_table - function that prints the table of n
 * @n: number of table to printed
*/
void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; a <= n; a++)
	{
		if (n < 0 || n > 15)
			break;
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c >= 10 && c <= 99) /*2-digit check*/
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (c >= 100 && c <= 999) /*3-digit check*/
			{
				_putchar(' ');
				_putchar(((c / 10) / 10) + '0');
				_putchar(((c / 10) % 10) + '0'); /*middle digit*/
				_putchar((c % 10) + '0');
			}
			else if (b != 0 && c < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else
				_putchar(c + '0');
			if (b != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
