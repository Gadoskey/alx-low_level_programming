#include "main.h"

/**
 * _abs - A propgram that prints lower alphabets
 * @c:Declared integer
 * Return: 0 on success
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
