#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - executes func given as a parameter on each elem of an array
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
