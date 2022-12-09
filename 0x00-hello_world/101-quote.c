#include <stdio.h>

/**
 * main - Entry point
 *
 * prints to stderr
 *
 * Return: 1
*/
int main(void)
{
	int c = stderr;

	fwrite(&c, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
