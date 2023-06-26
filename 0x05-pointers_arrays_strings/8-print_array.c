#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @x: array name
 * @b: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *x, int b)
{
	int v;

	for (v = 0; v < (b - 1); v++)
	{
		printf("%d, ", x[v]);
	}
		if (v == (b - 1))
		{
			printf("%d", x[b - 1]);
		}
			printf("\n");
}
