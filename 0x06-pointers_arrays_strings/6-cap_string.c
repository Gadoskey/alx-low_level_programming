#include "main.h"

/**
 * cap_string - check the code
 * @str: Pointer
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int new_word = 1;
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (new_word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		if (strchr(separators, str[i]) != NULL)
		{
			new_word = 1;
		}
		else
		{
			new_word = 0;
		}
	}
	return (str);
}
