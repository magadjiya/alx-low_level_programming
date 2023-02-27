#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: change value to b
 * @b: change value to a
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
