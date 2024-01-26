#include "variadic_functions.h"

/**
 * print_all - variadic function that prints all types passed to it
 * @format: types i.e c = char, i = int, s = char *, f = float
 */
void print_all(const char * const format, ...)
{
	int integer;
	char character;
	float floatNum;
	char *string;
	const char *str;
	va_list args;

	va_start(args, format);

	str = format;
	while (*str != '\0')
	{
		switch (*str)
		{
			case 'c':
			{
				character = (int)va_arg(args, int);
				printf("%c", character);
				break;
			}
			case 'i':
			{
				integer = (int)va_arg(args, int);
				printf("%i", integer);
				break;
			}
			case 'f':
			{
				floatNum = (double)va_arg(args, double);
				printf("%f", floatNum);
				break;
			}
			case 's':
			{
				string = (char *)va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			}
		}
		str++;
	}

	va_end(args);
	printf("\n");
}
