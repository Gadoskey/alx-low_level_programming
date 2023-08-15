#include "main.h"

/**
 * _islower - A propgram that prints lower alphabets
 * @c: Declared integer
 * Return: 0 on success
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
