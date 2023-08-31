#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * @n: the first digit
 * @m: the second digit
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, x = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		current = exclusive >> p;
		if (current & 1)
			x++;
	}

	return (x);
}
