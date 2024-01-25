#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - variadic function to print numbers
 * @separator: what we print btw the numbers
 * print nothing of NULL
 * @n: the number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);

	i = 0;
	while (i < (int)n)
	{
		if (i < (int)n - 1)
		{
			if (separator == NULL)
				printf("%d", va_arg(args, int));
			else
				printf("%d%s", va_arg(args, int), separator);
		}
		else
			printf("%d", va_arg(args, int));
		i++;
	}

	va_end(args);
	printf("\n");
}
