#include "main.h"

/**
 * main - entry point
 *
 * invoke print_alphabet
 *
 * No return
*/
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet
 *
 * putchar a - z
 *
 * Return void
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
