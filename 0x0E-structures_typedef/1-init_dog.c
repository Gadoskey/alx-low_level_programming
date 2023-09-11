#include "dog.h"
/**
 * init_dog - function to initialize a struct
 * @d: pointer to struct
 * @name: name
 * @age: age
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
