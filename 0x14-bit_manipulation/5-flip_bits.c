#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, x = 0;
	unsigned long int j;
	unsigned long int g = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		j = g >> v;
		if (j & 1)
			x++;
	}

	return (x);
}
