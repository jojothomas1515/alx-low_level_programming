#include "dog.h"

/**
 * init_dog - initialize the dog object
 * @d: pointer to the dog object
 * @name: string of the dogs name
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = &name;
	d->age = age;
	d->owner = &owner;
}
