#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print the nos in a variadic function
 * @separator: what goes between the numbers
 * @n: no of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (separator != NULL)
		{
			printf("%d", num);
			if (i < n - 1)
				printf("%s", separator);
		}
		else
		{
			printf("%d", num);
		}
	}
	putchar('\n');
	va_end(args);
}
