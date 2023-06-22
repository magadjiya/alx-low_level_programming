#include <stdio.h>

/**
 * main - program to print name of the exe file
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
