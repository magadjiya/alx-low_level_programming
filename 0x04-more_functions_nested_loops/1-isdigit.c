#include "main.h"
/**
 * _isdigit - checks for integers 0-9
 * @c: paramater to be checked
 * Return: 1 if int 0-9, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
