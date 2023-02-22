#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints till integer 98
 * @n: whatever number we start from
 */
void print_to_98(int n)
{
	int i = 98;

	if (n > i)
	{
		for (n = n; n > i; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < i)
	{
		for (n = n; n < i; n++)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
		printf("%d\n", n);
}
