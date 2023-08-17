#include "main.h"
/**
 * print_number - check the code
 * @n: The integer to be printed.
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int nl;

	if (n < 0)
	{
		nl = -n;
		putchar('-');
	}
	else
	{
		nl = n;
	}
	if (nl / 10)
	{
		print_number(nl / 10);
	}
	putchar((nl % 10) + '0');
}
