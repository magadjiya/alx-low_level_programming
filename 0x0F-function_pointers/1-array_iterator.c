#include "function_pointers.h"

/**
 * array_iterator - performs an action on an array of integers
 * @array: the array
 * @size: the array's size
 * @action: the function to be performed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
