#include <stdio.h>
/**
 * main - Starting
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
