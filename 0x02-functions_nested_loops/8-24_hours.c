#include "main.h"

/**
 * jack_bauer - print hours from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int x, y;

	x = 0;
	while (x < 24)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar((x / 10) + 48); /*print first digit*/
			_putchar((x % 10) + 48); /*last digit*/
			_putchar(58);
			_putchar((y / 10) + 48);
			_putchar((y % 10) + 48);
			_putchar('\n');
		}
		x++;
	}
}
