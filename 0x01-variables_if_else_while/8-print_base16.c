#include <stdio.h>
/**
 * main - print hexadecimal digits
 * Return: 0
 */
int main(void)
{
	int num, letter;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
