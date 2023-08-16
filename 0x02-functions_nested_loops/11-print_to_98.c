#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - A propgram that prints to 98
 *@n:The integer
 *Return: 0
 */
void print_to_98(int n)
{
	int d;

	if (n > 98)
		for (d = n; d > 98; d--)
			printf("%d, ", d);

	else
		for (d = n; d < 98; d++)
			printf("%d, ", d);
	printf("98\n");
}
