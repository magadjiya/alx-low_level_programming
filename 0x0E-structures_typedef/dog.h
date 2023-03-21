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


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
