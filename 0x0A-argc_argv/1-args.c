#include <stdlib.h>
#include <stdio.h>

/**
 * main - print argument count
 * @argc: argument count
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);
	return (0);
}
