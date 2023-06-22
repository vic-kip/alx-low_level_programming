#include "main.h"

/**
 * print_number - prints an integer
 * @a: integer to be printed
 */
void print_number(int a)
{
	unsigned int n1;

	if (a < 0)
	{
		n1 = -a;
		_putchar('-');
	} else
	{
		n1 = a;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
