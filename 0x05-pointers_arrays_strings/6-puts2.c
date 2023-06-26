#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @s: input
 * Return: print
 */
void puts2(char *s)
{
	int longi = 0;
	int v = 0;
	char *b = s;
	int x;

	while (*b != '\0')
		
	{
		b++;
		longi++;
	}
	v = longi - 1;
	for (x = 0 ; x <= v ; x++)
	{
		if (x % 2 == 0)
	{
		_putchar(s[x]);
	}
	}
	_putchar('\n');
}
