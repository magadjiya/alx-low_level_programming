#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees used dog structs
 * @d: struct dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(1);

	free(d);
}
