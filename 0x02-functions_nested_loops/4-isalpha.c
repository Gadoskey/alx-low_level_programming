#include "main.h"

/**
 * _isalpha - A propgram that prints lower alphabets
 * @c: Declared integer
 * Return: 0 on success
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
