#include "main.h"

/**
 * natural_sqr_root - returns the sqr root of a number
 * @i: the number we keep multiplying by itself till we find the root
 * @n: the actual provided integer
 * Return: i, the natural sqr root
 */
int natural_sqr_root(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (natural_sqr_root(i + 1, n));
}

/**
 * _sqrt_recursion - print the natural sqrt of a number
 * @n: the number
 * Return: call to the function that does the work
 */
int _sqrt_recursion(int n)
{
	return (natural_sqr_root(1, n));
}
