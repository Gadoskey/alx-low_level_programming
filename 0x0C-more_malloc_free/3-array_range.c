#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers from min to max.
 * @min: The minimum value (included).
 * @max: The maximum value (included).
 * Return: A pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *result, i;

	if (min > max)
	{
		return (NULL);
	}
	result = malloc(sizeof(int) * (max - min + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; min++, i++)
	{
		result[i] = min;
	}
	return (result);
}
