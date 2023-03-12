#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the product of two integers
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0, 1 if error
 */
int main(int argc, char **argv)
{
	int i, product;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = 1;
		for (i = 1; i < argc; i++)
		{
			product = product * atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	return (0);
}
