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
	{
		free(name);
		free(owner);
		return (NULL);
	}

	ptr->name = strdup(name);
	if (ptr->name == NULL)
	{
		free(owner);
		free(ptr);
		return (NULL);
	}

	ptr->age = age;

	ptr->owner = strdup(owner);
	if (ptr->owner == NULL)
	{
		free(owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
