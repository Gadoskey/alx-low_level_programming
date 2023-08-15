#include "main.h"

/**
 * print_alphabet_x10 - A propgram that prints alphabets 10 times
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int c;
	char d;

	for (c = 0 ; c < 10 ; c++)
	{
		for (d = 'a' ; d <= 'z' ; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}

