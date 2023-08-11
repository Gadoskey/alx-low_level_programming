#include <stdio.h>
/**
 * main - The starting point of the program
 * Return: 0 Always
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	putchar('\n');
	return (0);
}
