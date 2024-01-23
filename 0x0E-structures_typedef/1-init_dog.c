#include "dog.h"

/**
 * init_dog - initialize variable of struct dog
 * @d: dog struct name and pointer
 * @name: name of dog
 * @age: dog age
 * @owner: of dog
 *
 * Return: ptr to initialized vars
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* only runs if d is True i.e not NULL */
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
