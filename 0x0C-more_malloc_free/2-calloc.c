#include "main.h"
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = nmemb * size;
	array = malloc(total);
	if (array == NULL)
	{
		return (NULL);
	}
	memset(array, 0, total);
	return (array);
}
