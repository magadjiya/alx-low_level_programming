#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all integer arguments
 * @n: number of arguments
 * Return: sum of all argumemts
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	i = 0;
	while (i < (int)n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);

	return (sum);
}
