#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: argument
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#endif
