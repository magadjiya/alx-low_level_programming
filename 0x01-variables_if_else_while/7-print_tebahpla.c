#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar z-a
 *
 * Return: 0
*/
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
