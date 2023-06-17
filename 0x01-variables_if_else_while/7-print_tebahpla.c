#include <stdio.h>
/**
 * main - Entry Point
 * Return: (0) Success
 */

int main(void)
{
	int e = 122;

	while (e >= 97)
	{
		putchar(e);
		e--;
	}
	putchar('\n');
	return (0);
}
