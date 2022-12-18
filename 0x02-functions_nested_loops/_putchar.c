#include <unistd.h>

/**
 * _putchar - print character c to terminal
 *
 * @c: charater to be printed
 *
 * Return: character
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
