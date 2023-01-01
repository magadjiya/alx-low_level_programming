#include "main.h"

/**
 * puts2 - function that prints every other character
 * @str: pointer to string that will be worked on
 * Return: Void
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
