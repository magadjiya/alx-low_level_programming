#include "main.h"

/**
 * more_numbers - print from 0 - 14 10 times
 *
 * Return: Void
*/
void more_numbers(void)
{
	int x = 0, y;

	while (x < 10)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 0 && y <= 9)
			{
				_putchar(y + '0');
			}
			else if (y >= 10 && y <= 99)
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
		}
		_putchar('\n');
		x++;
	}
}
