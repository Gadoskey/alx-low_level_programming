#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			result = result * 10 + (sign * digit);
		}
		else if (result != 0)
			break;
		s++;
	}
	return (result);
}
