#include <stdio.h>

/**
 * main - program to print arg count w/o program name
 * @argc: argument count
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
