#include <stdio.h>
/**
 * main - print all combos of two 2-digit numbers
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = a; b < 100; b++)
		{
			if (a != b)
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
				putchar(' ');
				putchar(b / 10 + '0');
				putchar(b % 10 + '0');
				if (!(a == 98 && b == 99))
				{
					putchar(44); /* comma */
					putchar(32); /* space  */
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
