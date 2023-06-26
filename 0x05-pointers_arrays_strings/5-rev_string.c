#include "main.h"

/**
 * rev_string - Reverses a string
 * @x: Input string
 * Return: String in reverse
 */

void rev_string(char *x)
{
	char rev = x[0];
	int counter = 0;
	int b;

	while (x[counter] != '\0')
	counter++;
	for (b = 0; b < counter; b++)
	{
		counter--;
		rev = x[b];
		x[b] = x[counter];
		x[counter] = rev;
	}
}
