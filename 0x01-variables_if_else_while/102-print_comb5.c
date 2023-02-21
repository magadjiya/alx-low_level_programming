#include <stdio.h>
/**
 * main - print all combos of two 2-digit numbers
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = a; c < 10; c++)
			{
				d = b + 1;
				while (d <= 9)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(' ');
					putchar(c + 48);
					putchar(d + 48);
					if (a == 9 && c == 9 && d == 9 && b == 8)
						putchar('\n');
					else
					{
						putchar(44);
						putchar(32);
					}
					d++;
				}
			}
		}
	}
	return (0);
}
