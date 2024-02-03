#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees used dog structs
 * @d: struct dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Allocated memory for these members */
	/* so I need to free them too*/
	free(d->name);
	free(d->owner);

	free(d);
}
