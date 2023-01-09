#include <stdio.h>

/**
 * main - print sum of even fibonacci numbers below 4 million
 * Return: 0
 */
int main(void)
{
	unsigned int i, a, b, c, max, total;

	a = 0;
	b = 1;
	c = 0;
	max = 4000000;
	total = 0;

	for (i = 0; c <= max; i++)
	{
		c = a + b;
		if (c % 2 == 0 && c < max)
			total = total + c;
		a = b;
		b = c;
	}
	printf("%d\n", total);
	return (0);
}
