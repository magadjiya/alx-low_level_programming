#include "main.h"

/**
 * print_diagonal - function that prints a diagonal \ no of times
 *
 * @n: lenght of the diagonal
 *
 * Return: Void
*/
void print_diagonal(int n)
{
	int count, space;

	for (count = 0; count < n; count++)
	{
		for (space = 0; space < count; space++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
