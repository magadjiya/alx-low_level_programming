#include <stdio.h>

/**
 * main - print the name of the .c file we are compiling from
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
