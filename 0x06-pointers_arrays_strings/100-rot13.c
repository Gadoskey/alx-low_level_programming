#include "main.h"
#include <stdio.h>

/**
 * rot13 - check the code
 * @str: pointer
 * Return: Always 0.
 */
char *rot13(char *str)
{
	char *result = str;
	char c;
	char base;
	int i;

	for (i = 0; (c = str[i]) != '\0'; i++)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			result[i] = (c - base + 13) % 26 + base;
		}
	}
	return (result);
}
