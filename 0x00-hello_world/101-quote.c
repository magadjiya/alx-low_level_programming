#include <stdio.h>

/**
 * main - print to stderr
 * Return: 1
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(msg, 59, 1, stderr);
	return (1);
}
