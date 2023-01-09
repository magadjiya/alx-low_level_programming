#include <stdio.h>

/**
 * main - print 1st 50 fibonnaci numbers, begin with 1 & 2, end in a new line
 * Return: 0
 */
int main(void)
{
	int i, a, b, c;

	a = 0;
	b = 1;
	c = 0;

	for (i = 1; i <= 50; i++)
	{
		c = a + b;
		printf("%d", c);
		a = b;
		b = c;
		if (i != 50)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
