#include "main.h"
/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			/*print 1st and last digit*/
			if (c >= 10)
			{
				_putchar(32);
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
			/*print two spaces, check for b*/
			else if (c < 10 && b != 0)
			{
				_putchar(32);
				_putchar(32);
				_putchar(c + 48);
			}
			else
				_putchar(c + 48);
			if (b != 9)
				_putchar(44);
		}
		_putchar('\n');
	}
}
