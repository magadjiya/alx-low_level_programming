#include "main.h"

/**
 * _isalpha - checks for letters (upper or lower)
 *
 * @c: character to be checked
 *
 * Return: 1 if a letter, 0 is not
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
