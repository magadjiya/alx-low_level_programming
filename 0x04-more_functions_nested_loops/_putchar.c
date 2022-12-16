#include "main.h"
#include <unistd.h>

/**
 * _putchar -
 *
 * @c: set variable
 *
 * Return: 0
*/
int _putchar(int c)
{
	return (write(1, &c, 1));
}
