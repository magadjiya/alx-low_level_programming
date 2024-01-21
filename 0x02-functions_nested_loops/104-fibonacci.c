#include <stdio.h>
/**
 * main - first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long double x, y, z;
	int i;

	x = 1;
	y = 2;
	for (i = 0; i < 99; i++)
	{
		printf("%.0Lf", x);
		z = x + y;
		x = y;
		y = z;
		if (i < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
