#include "main.h"

/**
 * print_binary - prints the binary representation
 * @n:the binary value to be printed
 */
void print_binary(unsigned long int n)
{
	int v, x = 0;
	unsigned long int current;

	for (v = 63; v >= 0; v--)
	{
		current = n >> v;

		if (current & 1)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}
