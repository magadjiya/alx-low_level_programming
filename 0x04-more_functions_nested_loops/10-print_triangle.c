#include "main.h"
/**
 * print_triangle - print a mirrored triangle
 * @size: lenght of the triangle
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < size - a - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
