#include "main.h"
/**
 * print_diagonal - print a diagonal across the screen
 * @n: length of the diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		/*set i = 1 to make the conditional easier*/
		for (i = 1; i <= n; i++)
		{
			/*set j <= i to print j, i times*/
			for (j = 1; j <= i; j++)
			{
				if (j == i)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
