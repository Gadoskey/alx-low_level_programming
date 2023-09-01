#include "main.h"

/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
