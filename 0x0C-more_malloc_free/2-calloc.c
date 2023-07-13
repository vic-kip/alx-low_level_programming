#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_calloc - its function is to allocate memory for an array
 * @nmemb: the total number of elements in the array
 * @size: the exact size of each element
 * Return: pointer is to be allocated memory in the code, if not return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int f;
	void *x;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	f = nmemb * size;

	x = malloc(f);

	if (x == NULL)
	{
	return (NULL);
	}

	memset(x, 0, f);

	return (x);
}
