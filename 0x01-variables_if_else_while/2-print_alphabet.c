#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar lower case letters
 *
 * Return: 0
*/
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
