#include "main.h"

/**
 * print_square - prints # in a square of n
 *
 * @size: number of square
 *
 * Return: Void
*/
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
