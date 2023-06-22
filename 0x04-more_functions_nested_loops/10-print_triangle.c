#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @e: size of the triangle
 */
void print_triangle(int e)
{
	if (e <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1; x <= e; x++)
		{
			for (y = x; y < e; y++)
			{
				_putchar(' ');
			}

			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
