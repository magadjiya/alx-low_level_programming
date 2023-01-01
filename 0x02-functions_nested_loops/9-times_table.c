#include "main.h"

/**
 * times_table - prints times table from 0 to 9
 * Return: Void
*/
void times_table(void)
{
	int x, y, z;

	x = 0;
	while (x < 10)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z >= 10 && z <= 99) /*check two digit numbers*/
			{
				_putchar(32);
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0'); /*space, 1st & last ints*/
			}
			else if (y != 0 && z < 10) /*add double space for all but 1st*/
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}
			if (y != 9)
				_putchar(',');
		}
		_putchar('\n');
		x++;
	}
}
