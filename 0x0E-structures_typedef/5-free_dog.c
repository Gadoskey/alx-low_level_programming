#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - check the code
 * @d: str
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
