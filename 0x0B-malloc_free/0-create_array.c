#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a string and initializes with a char
 * @size: size of array
 * @c: specific character
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		string = malloc(sizeof(char) * size);
		free(string);
		for (i = 0; i < size + 1; i++)
		{
			string[i] = c;
		}
	}
	return (string);
}
