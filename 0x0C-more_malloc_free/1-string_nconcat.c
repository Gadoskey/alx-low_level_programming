#include "main.h"
/**
 * string_nconcat - concat two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	newstring = malloc(sizeof(char) * (len1 + n + 1));
	if (newstring == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		newstring[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		newstring[i] = s2[j];
	}
	newstring[i] = '\0';
	return (newstring);
}
