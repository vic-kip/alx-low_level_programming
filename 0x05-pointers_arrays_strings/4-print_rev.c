#include "main.h"
/**
 * print_rev - imprime en reversa
 * @x: string
 * return: 0
 */
void print_rev(char *x)
{
	int longi = 0;
	int b;

	while (*x != '\0')
	{
		longi++;
		x++;
	}
	x--;
	for (b = longi; b > 0; b--)
	{
		_putchar(*x);
		x--;
	}

	_putchar('\n');
}
