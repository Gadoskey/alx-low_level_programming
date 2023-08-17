#include "main.h"
/**
 * _isupper - Checks if a character is an uppercase letter.
 * @c: The char to check
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
