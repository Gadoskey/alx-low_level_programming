#include "main.h"

/**
 *print_times_table - A propgram that prints to 98
 *@n:The integer
 *Return: 0
 */
void print_times_table(int n)
{
	int d, m, re;

	if (n <= 15 && n >= 0)
		for (d = 0; d <= n; d++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				re = d * m;
				if (re <= 99)
					_putchar(' ');
				if (re <= 9)
					_putchar(' ');
				if (re >= 100)
				{
					_putchar((re / 100) + '0');
					_putchar(((re / 10) % 10) + '0');
				}
				else if (re <= 99 && re >= 10)
				{
					_putchar((re / 10) + '0');
				}
				_putchar((re % 10) + '0');
			}
		}
}
