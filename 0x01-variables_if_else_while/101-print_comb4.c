#include <stdio.h>

/**
 * main - program that prints all possible different 3-digit combinations
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar(x + 48);
				putchar(y + 48);
				putchar(z + 48);
				if (x == 7 && y == 8 && z == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
