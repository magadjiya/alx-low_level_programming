#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two integer arguments
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if success, -1 if Error
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product);

	return (0);
}
