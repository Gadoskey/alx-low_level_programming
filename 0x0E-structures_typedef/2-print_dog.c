#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Prints the properties of a dog struct
 * @d: Pointer to the struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, d-age, d->owner;
}
