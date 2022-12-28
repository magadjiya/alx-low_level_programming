#include "main.h"

/**
 * _abs - function that returns absolute value of integer
 * @i: integer inputed
 * Return: Absolute integer
*/
int _abs(int i)
{
	if (i < 0)
	{
		return (-1 * i); /* two multiplied negatives give a positive */
	}
	return (i);
}
