#include "main.h"
/**
 * _strlen - A program that prints the length of a character
 * @s: The pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
