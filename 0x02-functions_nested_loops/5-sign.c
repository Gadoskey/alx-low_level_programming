#include "main.h"

/**
 * print_sign - A propgram that prints lower alphabets
 * @n: Declared integer
 * Return: 0 on success
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 48)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
