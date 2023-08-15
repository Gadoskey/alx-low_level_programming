#include "main.h"

/**
 * print_last_digit - A propgram that prints lower alphabets
 * @c:Declared integer
 * Return: 0 on success
 */
int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
