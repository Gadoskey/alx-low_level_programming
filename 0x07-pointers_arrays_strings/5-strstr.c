#include "main.h"

/**
 * _strstr - check the code
 * @haystack: pointer
 * @needle: pointer
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hay = haystack;
		char *ndl = needle;

		while (*hay && *ndl && (*hay == *ndl))
		{
			hay++;
			ndl++;
		}

		if (!*ndl)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
