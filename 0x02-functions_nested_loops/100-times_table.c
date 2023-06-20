#include "main.h"

/**
 * print_times_table - prints the t times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int t)
{
	int a, b, x;

	if (t >= 0 && t <= 15)
	{
		for (a = 0; a <= t; a++)
		{
			for (b = 0; b <= t; b++)
			{
				x = b * a;
				if (b == 0)
				{
					_putchar(x + '0');
				} else if (x < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				} else if (x >= 10 && x < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				} else if (x >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((x / 100) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

