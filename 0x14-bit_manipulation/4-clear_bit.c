#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: points to the number that needs to be changed
 * @index: bit's index
 * Return: 1 if it worked, or -1 error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
