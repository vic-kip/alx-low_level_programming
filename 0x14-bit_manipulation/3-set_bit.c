#include "main.h"

/**
 * set_bit -  function that sets the value of a bit
 * @n: points to the number to print
 * @index: index,starting from 0 of the bit you want
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
