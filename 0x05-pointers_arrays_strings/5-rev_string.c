#include "main.h"
#include <string.h>
/**
 * rev_string - prints a string in reverse
 * @s: The pointer
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int length = strlen(s);
	int i;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
