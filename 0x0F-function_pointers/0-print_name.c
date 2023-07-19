#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: adding a string
 * @f: the function that is pointed to by the pointer
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
