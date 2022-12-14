#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet - called from
 *
 * Return: 0
*/

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

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
