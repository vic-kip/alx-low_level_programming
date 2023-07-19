#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - prints executes a function given as a parameter on each element of an array
 *@size: the size of the array
 *@action: a pointer to the function
 *@array: an array
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
