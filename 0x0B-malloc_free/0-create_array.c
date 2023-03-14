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

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		string = malloc(sizeof(char) * size);
		string[0] = c;
		/*free(string);*/
	}
	return (string);
}
