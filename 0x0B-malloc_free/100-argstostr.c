#include "main.h"
/**
 * argstostr - prints an array of characters
 * @ac: the character to print
 * @av: the size
 * Return: a pointer to char
 */
char *argstostr(int ac, char **av)
{
	int total = 0, i, j, index = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total++;
		}
		total++;
	}

	result = malloc(total + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[index++] = av[i][j];
		}
		result[index++] = '\n';
	}
	result[index] = '\0';
	return (result);
}
