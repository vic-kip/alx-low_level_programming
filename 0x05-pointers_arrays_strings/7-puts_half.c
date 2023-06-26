#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @s: input
 * Return: half of input
 */
void puts_half(char *s)
{
	int x, b, i;

	i = 0;

	for (x = 0; s[x] != '\0'; x++)
		i++;

	b = (i / 2);

	if ((i % 2) == 1)
		b = ((i + 1) / 2);

	for (x = b; s[x] != '\0'; x++)
		_putchar(s[x]);
	_putchar('\n');
}
