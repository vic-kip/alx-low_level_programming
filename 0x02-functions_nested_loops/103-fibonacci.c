#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long int l, t, next, sum;

	l = 1;
	t = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (l < 4000000 && (l % 2) == 0)
		{
			sum = sum + l;
		}
		next = l + t;
		l = t;
		t = next;
	}

	printf("%lu\n", sum);

	return (0);
}
