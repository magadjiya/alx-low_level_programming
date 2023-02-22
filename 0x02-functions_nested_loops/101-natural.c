#include <stdio.h>
/**
 * main - print multiples of 5,3 belpw 1024
 * Return: 0
 */
int main(void)
{
	int i, max_int, sum;

	max_int = 1024;
	sum = 0;
	for (i = 0; i < max_int; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
