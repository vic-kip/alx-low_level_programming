#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	unsigned long int a, v, next, sum;

	a = 1;
	v = 2;
	sum = 0;

	for (x = 1; x <= 33; ++x)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		next = a + v;
		a = v;
		v = next;
	}

	printf("%lu\n", sum);

	return (0);
}
