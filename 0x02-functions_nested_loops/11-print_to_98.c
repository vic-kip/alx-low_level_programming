#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from x to 98,
 * followed by a new line
 * @x: print from this number
 */
void print_to_98(int x)
{
	int a, b;

	if (x <= 98)
	{
		for (a = x; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	} else if (x >= 98)
	{
		for (b = x; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
}
