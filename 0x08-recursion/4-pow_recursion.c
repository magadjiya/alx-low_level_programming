#include "main.h"

/**
 * _pow_recursion - raise a number to the power of another number
 * @x: the number
 * @y: the power
 * Return: the final number
 */
int _pow_recursion(int x, int y)
{
	/*multiply whatever x is by 1 to get the value back*/
	int z = 1;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	z *= x;
	return (z * _pow_recursion(x, y - 1));
}
