#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings.
 * @separator:In between the strings a string should be printed
 * @n: total number of strings passed unto the function.
 * @...: number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *y;
	unsigned int f;

	va_start(s, n);

	for (f = 0; f < n; f++)
	{
		y = va_arg(s, char *);

		if (y == NULL)
			printf("(nil)");
		else
			printf("%s", y);

		if (f != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s);
}
