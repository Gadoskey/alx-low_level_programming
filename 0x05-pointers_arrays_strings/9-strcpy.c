#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 * @dest: The first pointer
 * @src: The second pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
