#include <unistd.h>

/**
 * main - Entry point
 *
 * print to std error
 *
 * Return: 0
*/
int main(void)
{
	char put[] = "__putchar\n";

	write(0, put, 10);
	return (0);
}
