#include "main.h"

/**
 * get_bit - prints the value of the bit which is in decimal value
 * @n: number
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = (n >> index) & 1;

	return (x);
}
