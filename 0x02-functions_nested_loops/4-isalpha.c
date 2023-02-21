#include "main.h"
/**
 * _isalpha - checks for upper & lowercase letters
 * @c: character to be checked
 * Return: 1 if True, 0 if false
 */
int _isalpha(int c)
{
	/*ASCII values for a-z and A-Z respectively*/
	if ((c >= 97 && c <= 127) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
