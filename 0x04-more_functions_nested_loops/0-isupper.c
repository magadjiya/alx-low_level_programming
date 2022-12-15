#include "main.h"

/**
 * _isupper - function that checks uppercase letters
 *
 * @c: set variable name
 *
 * Return: 1 if _isupper == true, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
