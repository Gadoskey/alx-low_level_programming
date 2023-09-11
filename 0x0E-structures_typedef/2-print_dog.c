#include "main.h"
#include "dog.h"
/**
 * print_dog - Prints the properties of a dog struct
 * @d: Pointer to the struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)";
	printf("Age: %.6f\n", d->age ? d->age : "(nil)";
	printf("Owner: %s\n", d->owner ? d->name : "(nil)";
}
