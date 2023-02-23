#include "main.h"
/**
 * more_numbers - print 0-14
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		while (i < 15)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			i++;
		}
		_putchar('\n');
	}
}
