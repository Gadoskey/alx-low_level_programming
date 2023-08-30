#include "main.h"
/**
 * _strlen_recursion - prints string length
 * @s:pointer
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
