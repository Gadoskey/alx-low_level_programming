#include "main.h"

/**
 * _strpbrk - searches for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
