#include <stdio.h>

/**
 * main - entry point
 *
 * print all combinations of two digit numbers
 *
 * 01 and 10 are considered the same, should be excluded
 *
 * Return: 0
*/
int main(void)
{
	int f = 0, s;

	while (f <= 9)
	{
		for (s = f + 1; s <= 9; s++)
		{
			putchar(f + '0');
			putchar(s + '0');
			if (f == 8 && s == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
		f++;
	}
	putchar('\n');
	return (0);
}
