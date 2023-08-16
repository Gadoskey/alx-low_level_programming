#include <stdio.h>
/**
* main - A propgram that prints lower alphabets
* Return: 0 on success
*/
int main(void)
{
	int first = 1;
	int second = 2;
	int next = 0;
	int sum = 2;

	while (next <= 4000000)
	{
		next = first + second;

		if (next % 2 == 0)
		{
			sum += next;
		}

		first = second;
		second = next;
	}

	printf("%d\n", sum);
	return (0);
}
