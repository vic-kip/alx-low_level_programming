#include "main.h"

/**
 * get_bit - function that returns the value of a bit,given index
 * @n: search
 * @index: bit's index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = (n >> index) & 1;

	return (x);
}
