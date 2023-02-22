#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int i, a, b, c;

	a = 1;
	b = 2;
	for (i = 0; i < 50; i++)
	{
		printf("%lu", a);
		c = a + b;
		a = b;
		b = c;
		if (i < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
