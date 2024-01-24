#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: the name
 * @f: pointer to a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(1);
	(*f)(name);
}
