#include "main.h"
/**
 * jack_bauer - print 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hours, min;

	for (hours = 0; hours < 24; hours++)
	{
		for (min = 0; min < 60; min++)
		{
			/*append 0 to make it 2 digit*/
			if (hours < 10)
				_putchar(48);
			/*or print the first digit*/
			else
				_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			if (min < 10)
				_putchar(48);
			else
				_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
