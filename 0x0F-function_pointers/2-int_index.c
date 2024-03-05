#include "function_pointers.h"

/**
 * int_index - find if a number is located in an array
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: function that compares two integers
 * Return: the index if the number is found, -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		index = (*cmp)(array[i]);
		if (index != 0)
			return (i);
		i++;
	}

	return (-1);
}
