#include <stdlib.h>
#include "main.h"

/**
 * *array_range - its supposed to create an array of integers
 * @min:the minimum range of values to be stored
 * @max: the maximum range of values stored and also the number of elements
 * Return: it returns a pointer to the new array, if fails returns NUll
 */
int *array_range(int min, int max)
{
	int *x;
	int y, f;

	if (min > max)
		return (NULL);

	f = max - min + 1;

	x = malloc(sizeof(int) * f);

	if (x == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		x[y] = min++;

	return (x);
}
