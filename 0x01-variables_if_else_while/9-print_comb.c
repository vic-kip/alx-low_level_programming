#include <stdio.h>
/**
 * main - Entry Point
 * Return: (0) Success
 */
int main(void)
{
	int r;

	for (r = 48; r <= 57; r++)
	{
		putchar(r);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
