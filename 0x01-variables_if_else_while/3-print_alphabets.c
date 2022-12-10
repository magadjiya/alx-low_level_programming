#include <stdio.h>

/**
 * main - entry point
 *
 * putchar lower, upper alphabets then \n
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
	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
