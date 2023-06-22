#include <stdio.h>

/**
 * main - program to print args passed
 * @argc: arg count
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
