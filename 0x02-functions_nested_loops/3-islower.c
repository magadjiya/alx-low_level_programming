#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: character to be checked
 * Return: 1 if true, 0 is false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 127)
		return (1);
	return (0);
}
