#include "main.h"

/**
 * _isdigit - function that checks digits 0 - 9
 *
 * @c: default var name
 *
 * Return: 1 if _isdigit(c) is true, else false
*/
int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
	{
		return (1);
	}
	return (0);
}
