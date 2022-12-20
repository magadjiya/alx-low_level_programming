#include "main.h"

/**
 * _puts - print str/char to the terminal
 * @str: string to be printed
 * Return: Void
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
