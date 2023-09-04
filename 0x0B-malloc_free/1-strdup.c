#include "main.h"

/**
  * _strdup - prints an array of characters
  * @str: the character to print
  * Return: a pointer to char
  */
char *_strdup(char *str)
{
	int length = 0, i;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	newstr = malloc((length + 1) * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
