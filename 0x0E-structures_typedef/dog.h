#ifndef JOJO_TESTING_DOG_H
#define JOJO_TESTING_DOG_H

#include <stdio.h>

/**
 * struct dog - dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* JOJO_TESTING_DOG_H */
