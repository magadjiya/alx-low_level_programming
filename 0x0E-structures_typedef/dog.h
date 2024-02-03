#ifndef DOG_H
#define DOG_H

/* Header files */
#include <stdlib.h>

/**
 * struct dog - a dog struct with basic info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: grouped data for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - type for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(const char *s);
int _strlen(const char *s);
void free_dog(dog_t *d);

#endif /* DOG_H */
