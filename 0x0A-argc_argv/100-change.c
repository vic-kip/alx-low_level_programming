#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, x, u;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	u = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && i >= 0; x++)
	{
		while (i >= coins[x])
		{
			u++;
	i -= coins[x];
		}
	}

	printf("%d\n", u);
	return (0);
}
