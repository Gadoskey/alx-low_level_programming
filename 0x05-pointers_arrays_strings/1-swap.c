#include "main.h"
#include <stdio.h>

/**
 * swap_int - A program that swaps two integers
 *@a: The pointer
 *@b: The pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
