#include "main.h"

/**
 * binary_to_uint - converts a number which is binary to int
 * @b: binary number
 * Return: a number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int m = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		m = 2 * m + (b[x] - '0');
	}

	return (m);
}
