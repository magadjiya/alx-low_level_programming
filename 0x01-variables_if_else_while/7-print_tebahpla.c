#include <stdio.h>
/**
 * main - putchar z to a
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
