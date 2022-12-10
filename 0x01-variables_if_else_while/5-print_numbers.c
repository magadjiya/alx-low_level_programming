#include <stdio.h>

/**
 * main - Entry point
 *
 * print out 0-9
 *
 * Return: 0
*/
int main(void)
{
	unsigned int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%i", i);
	}
	printf("\n");
	return (0);
}
