#include "main.h"
/**
 * main - output _putchar to std output
 * Return: 0
 */
int main(void)
{
	char s[] = "_putchar";
	int count;

	for (count = 0; count < 10; count++)
	{
		if (s[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(s[count]);
	}
	return (0);
}
