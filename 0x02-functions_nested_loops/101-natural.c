#include <stdio.h>

/**
 * main - print sum of all mutiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int i;
	int total = 0; /*set total sum to 0*/
	int max = 1024;

	for (i = 0; i < max; i++)
	{
		/*if multiple of 3 or 5 increment total*/
		if (i % 3 == 0 || i % 5 == 0)
		{
			total = total + i;
		}
	}
	printf("%d\n", total);
	return (0);
}
