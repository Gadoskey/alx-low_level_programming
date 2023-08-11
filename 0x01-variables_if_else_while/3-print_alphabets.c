#include <stdio.h>
/**
 * main - The starting point of the program
 * Return: 0 Always
 */
int main(void)
{
	char ch;
	char cc;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (cc = 'A' ; cc <= 'Z' ; cc++)
	{
		putchar(cc);
	}
	putchar('\n');
	return (0);
}
