#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;
	while (i < 50)
	{
		if (i == 0)
		printf("%ld", j);
	else if (i == 1)
		printf("%ld", k);
	else
	{
		k += j;
		j = k - j;
		printf(",%ld", k);
	}
		++i;
	}
		printf("\n");
		return (0);
}
