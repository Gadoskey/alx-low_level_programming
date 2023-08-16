#include <stdio.h>
/**
 * main - A propgram that prints lower alphabets
 * Return: 0 on success
 */
int main(void)
{
	int a = 1;
	int b = 2;

	printf("%d, %d, ", a, b);

	for (int i = 3; i <= 98; i++)
	{
		int next = a + b;

		printf("%d", next);
		if (i != 98)
		{
			printf(", ");
		}
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
