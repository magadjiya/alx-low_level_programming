#include "main.h"
#include <stdio.h>

/**
 * print_array - print the elements of an array
 * @a: pointer to the 1st element
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < n - 1)
				printf(", ");
			else
				printf("\n");
		}
	}
	else
	{
		putchar('\n');
	}
}
