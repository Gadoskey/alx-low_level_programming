#include "main.h"

/**
  * main - a program that prints its name
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 on success.
  */

int main(int argc, char *argv[])
{
	int result = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	printf("%d\n", result);
	return (0);
}
