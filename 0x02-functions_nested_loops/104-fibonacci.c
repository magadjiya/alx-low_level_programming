#include <stdio.h>
/**
 * main - first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int x, y, z;
	int i;

	x = 1;
	y = 2;
	for (i = 0; i < 99; i++)
	{
		printf("%lu", x);
		z = x + y;
		x = y;
		y = z;
		if (i < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
