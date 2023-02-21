#include "main.h"
/**
 * _abs - return the absolute value of an integer
 * @i: integer
 * Return: i
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	else
		i = i;
	return (i);
}
