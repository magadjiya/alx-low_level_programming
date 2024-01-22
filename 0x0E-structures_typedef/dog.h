#ifndef DOG_H
#define DOG_H

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

#endif /* DOG_H */
