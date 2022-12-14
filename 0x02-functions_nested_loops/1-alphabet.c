#include "main.h"

/**
 * print_alphabet - entry
 *
 * _putchar from a to z
 *
 * No return
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter < 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
