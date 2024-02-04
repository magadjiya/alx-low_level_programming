#include "variadic_functions.h"

/**
 * print_all - variadic function that prints all types passed to it
 * @format: types i.e c = char, i = int, s = char *, f = float
 */
void print_all(const char * const format, ...)
{
	const char *str;
	va_list args;

	va_start(args, format);
	str = format;
	if (str == NULL)
		return;

	while (*str)
	{
		switch (*str)
		{
			case 'c':
			{
				printf("%c", va_arg(args, int));
				break;
			}
			case 'i':
			{
				printf("%i", va_arg(args, int));
				break;
			}
			default:
			other_types(str, args);
		}
		/* Check if valid specifer */
		/* Check if next char isnt a null char */
		if ((*str == 'c' || *str == 'f' || *str == 'i' || *str == 's') && *(str + 1))
			printf(", ");
		str++;
	}

	va_end(args);
	printf("\n");
}

/**
 * other_types - handles float and string types
 * @format: the types received
 * @argList: the list of variable arguments
 */
void other_types(const char * const format, va_list argList)
{
	char *string;

	switch (*format)
	{
		case 'f':
		{
			printf("%f", va_arg(argList, double));
			break;
		}
		case 's':
		{
			string = va_arg(argList, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string);
			break;
		}
	}
	va_end(argList);
}
