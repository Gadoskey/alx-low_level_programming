#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Prints an array of numbers
 * @array: array
 * @size: size of array
 * @action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
#endif
