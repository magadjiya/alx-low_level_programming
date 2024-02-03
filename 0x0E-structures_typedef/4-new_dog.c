#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		exit(1);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
