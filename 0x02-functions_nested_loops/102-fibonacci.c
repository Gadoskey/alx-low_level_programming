#include "main.h"
#include <stdio.h>

/**
 * main - A propgram that prints lower alphabets
 * Return: 0 on success
 */
int main(void)
{
	int i;
	long int fibo[50];

	fibo[0] = 1;
	fibo[1] = 2;
	printf("%ld, %ld, ", fibo[0], fibo[1]);

	for (i = 2; i < 50; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	if (i < 49)
	{
		printf("%ld\n", fibo[i]);
	}
	else
	{
		printf("%ld, ", fibo[i]);
	}
	return (0);
}
