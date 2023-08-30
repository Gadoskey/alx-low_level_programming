#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - check the co
 * @n: pointer
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, n - 1));
}

/**
 * check_prime - check the code
 * @n: pointer
 * @i: pointer
 * Return: Always 0.
 */
int check_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (check_prime(n, i - 1));
}
