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
	ptr->name = _strdup(name);
	ptr->age = age;
	ptr->owner = _strdup(owner);

	return (ptr);
}

/**
 * _strdup - returns a strings null terminated duplicate
 * @s: the string
 * Return: a pointer to the strings duplicate
 */
char *_strdup(const char *s)
{
	int i;
	int length = _strlen(s);
	char *str_cpy = malloc((length + 1) * sizeof(char));

	if (str_cpy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		str_cpy[i] = s[i];
	str_cpy[length] = '\0';

	return (str_cpy);
}

/**
 * _strlen - length of string
 * @s: the string
 * Return: length w/o null terminating byte
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
