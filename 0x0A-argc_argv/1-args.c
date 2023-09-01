#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its count
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
