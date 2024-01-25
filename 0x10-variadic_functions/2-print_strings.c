#include "variadic_functions.h"

/**
 * print_strings - variadic function that prints strings passed
 * @separator: what comes btw strings
 * print nothing if the separator is NULL
 * @n: number of strings passed to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < (int)n)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";

		/* Check if string is not the last one */
		if (i < (int)n - 1)
		{
			if (separator == NULL)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else
			printf("%s", str);
		i++;
	}

	va_end(args);
	printf("\n");
}
