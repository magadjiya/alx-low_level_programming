#include <stdio.h>
/**
 * main - print integers 0-9
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
