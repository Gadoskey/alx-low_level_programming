#include "main.h"
/**
 * _realloc - Reallocate memory for a memory block.
 * @ptr: Pointer to the previously allocated memory block (or NULL).
 * @old_size: Size of the old memory block in bytes.
 * @new_size: New size for the memory block in bytes.
 * Return: Pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (old_size < new_size)
	{
		new_size = old_size;
	}
	memcpy(new_ptr, ptr, new_size);
	free(ptr);
	return (new_ptr);
}
