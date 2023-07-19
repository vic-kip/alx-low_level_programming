#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - returns the index of the first element
 * @array - an array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: 0,no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
