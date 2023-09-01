#include "main.h"

/**
  * main - a program that prints its name
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 on success.
  */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc == 3)
	{
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
