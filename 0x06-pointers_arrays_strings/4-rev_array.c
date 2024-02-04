#include "main.h"

/**
 * reverse_array - reverses an array of n elements
 * @a: the array of integers
 * @n: the number of elements
 */
void reverse_array(int *a, int n)
{
	int i, j, tempo;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tempo = a[i];
		a[i] = a[j];
		a[j] = tempo;
	}
}
