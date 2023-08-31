#include "main.h"

/**
 * print_binary - prints decimal number from  a binary number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int x, f = 0;
	unsigned long int p;

	for (x = 63; x >= 0; x--)
	{
		p = n >> x;

		if (p & 1)
		{
			_putchar('1');
			f++;
		}
		else if (f)
			_putchar('0');
	}
	if (!f)
		_putchar('0');
}
