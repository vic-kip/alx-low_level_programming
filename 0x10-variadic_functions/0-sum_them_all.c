#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all the paramters.
 * @n: Total number of paramters passed unto the function.
 * @...: number of paramters to calculate the sum.
 * Return: If n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int a, f = 0;

	va_start(x, n);

	for (a = 0; a < n; a++)
		f += va_arg(x, int);

	va_end(x);

	return (f);
}
