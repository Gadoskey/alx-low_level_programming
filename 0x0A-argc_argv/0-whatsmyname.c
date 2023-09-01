#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints its name
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
