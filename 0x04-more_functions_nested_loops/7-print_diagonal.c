#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @a: number of times the character \ should be printed
 */

void print_diagonal(int a)
{
	if (a <= 0)
	{
		_putchar('\n');
	} else
	{
		int x, y;

		for (x = 0; x < a; x++)
		{
			for (y = 0; y < a; y++)
			{
				if (y == x)
					_putchar('\\');
				else if (y < x)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
