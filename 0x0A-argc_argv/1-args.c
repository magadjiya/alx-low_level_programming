#include <stdio.h>

/**
 * main - print number of cmd arguments
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
