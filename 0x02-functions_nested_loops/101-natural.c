#include "main.h"

/**
 * main - A propgram that prints lower alphabets
 * Return: 0 on success
 */
int main(void)
{
	int i, s = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
			s += i;
	}
	printf("%d\n", s);
	return (0);
}
