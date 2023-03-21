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

/* The other prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
