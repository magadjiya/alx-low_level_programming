#include "main.h"

/**
 * factorial - return the factorial of an integer n
 * @n: the integer provided
 * Return: the product of the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
