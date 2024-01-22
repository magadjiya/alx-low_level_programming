#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable of struct dog
 * struct dog: dog structure
 * @d: pointer to structure elements
 * @name: name of dog
 * @age: dog age
 * @owner: of dog
 *
 * Return: ptr to initialized vars
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
