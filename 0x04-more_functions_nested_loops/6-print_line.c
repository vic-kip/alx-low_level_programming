#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @a: number of times the character _ should be printed
 */
void print_line(int a)
{
	if (a <= 0)
	{
		_putchar('\n');
	} else
	{
		int x;

		for (x = 1; x <= a; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
