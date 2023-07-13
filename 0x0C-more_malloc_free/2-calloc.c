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
	unsigned int totalSize;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}
	
	totalSize = nmemb * size;
	
	ptr = malloc(totalSize);
	
	if (ptr == NULL)
	{
		return NULL;
	}
	
	memset(ptr, 0, totalSize);
	
	return ptr;
}
