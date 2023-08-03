#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: a string that contains the binary number or 0
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int x = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		x = 2 * x + (b[m] - '0');
	}

	return (x);
}
