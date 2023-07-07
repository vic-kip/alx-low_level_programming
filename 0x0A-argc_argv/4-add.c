#include <stdio.h>
#include <stdlib.h>
#include  <ctype.h>
/**
 * main - Print the sum of two positive numbers
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;
	int str;
	int w = 0;

	x = 1;
	while (x < argc)
	{
		if (argv[x])

		{
			str = atoi(argv[x]);
			w += str;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		x++;
	}

	printf("%d\n", w);

	return (0);
}
