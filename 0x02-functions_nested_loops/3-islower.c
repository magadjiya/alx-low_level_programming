#include "main.h"
#include <stdbool.h>

/**
 * _islower - function that checks lowercase letters
 *
 * @c: set integer
 *
 * Return: 1 if _islower == true, 0 if not
*/
int _islower(int c)
{
	if (c  >= 97  && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
