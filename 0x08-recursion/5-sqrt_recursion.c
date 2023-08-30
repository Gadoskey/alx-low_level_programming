#include "main.h"
/**
 * _sqrt_recursion_helper - prints a square
 * @n: pointer
 * @start: pointer
 * @end: pointer
 * Return: 0
 */

int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid;
	int mid_squared;

	if (start > end)
	{
		return (-1);
	}

	mid = (start + end) / 2;
	mid_squared = mid * mid;

	if (mid_squared == n)
	{
		return (mid);
	}
	else if (mid_squared > n)
	{
		return (_sqrt_recursion_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}
}

/**
 * _sqrt_recursion - prints a square
 * @n: pointer
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 0, n));
}
