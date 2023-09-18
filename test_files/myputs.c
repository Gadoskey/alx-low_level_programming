#include "main.h"
/**
 * myputs - prints a string
 * @str: string
 * Return: count
 */
int myputs(char *str)
{
	int count;

	if (str)
	{
		for (count = 0; str[count] != '\0'; count++)
		{
			myputchar(str[count]);
		}
	}
	return (count);
}

