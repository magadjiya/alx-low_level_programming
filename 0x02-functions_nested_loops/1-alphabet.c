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
	for (char letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
