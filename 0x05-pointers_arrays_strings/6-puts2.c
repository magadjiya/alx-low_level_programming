#include "main.h"

/**
 * puts2 - function that prints ever other character
 * @str: pointer to string that will be worked on
 * Return: Void
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
