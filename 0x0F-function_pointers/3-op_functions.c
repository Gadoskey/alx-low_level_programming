#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition
 * @a: first parameter
 * @b: second parameter
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 * @a: first parameter
 * @b: second parameter
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: first parameter
 * @b: second parameter
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: first parameter
 * @b: second parameter
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder
 * @a: first parameter
 * @b: second parameter
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
