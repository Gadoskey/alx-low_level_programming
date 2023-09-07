#include "main.h"
/**
 * is_digit - check if argument is digit
 * @c: character
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * string_to_int - string to integer
 * @str: string
 * Return: result
 */
int string_to_int(char *str)
{
	int result = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_digit(str[i]))
		{
			printf("Error\n");
			exit(98);
		}
		result = result * 10 + (str[i] - '0');
	}
	return (result);
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = string_to_int(argv[1]);
	num2 = string_to_int(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
