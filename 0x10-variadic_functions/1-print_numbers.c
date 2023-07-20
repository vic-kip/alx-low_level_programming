#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function to print numbers followed by a new line.
 * @separator: in between the numbers a string should be printed.
 * @n: total number of integers passed unto the function.
 * @...: numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int f;

	va_start(x, n);

	for (f = 0; f < n; f++)
	{
		printf("%d", va_arg(x, int));

		if (f != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(x);
}
