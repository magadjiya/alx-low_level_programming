#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - contains the basic information about dogs
 * @name: name of dog
 * @age: the age of dog
 * @owner: person who owns the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
