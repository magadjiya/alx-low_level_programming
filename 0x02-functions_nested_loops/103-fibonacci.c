#include <stdio.h>
/**
 * main - sum of even fibo numbers below 4,000,000
 * Return: 0
 */
int main(void)
{
	unsigned int x, y, z, sum;

	sum = 0;
	x = 1;
	y = 2;
	while (x < 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if (x % 2 == 0)
			sum = sum + x;
	}
	printf("%u\n", sum);
	return (0);
}
