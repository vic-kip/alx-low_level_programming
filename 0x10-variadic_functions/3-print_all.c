#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function to print anything
 * @format: format is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *f, *j = "";

	va_list li;

	va_start(li, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", j, va_arg(li, int));
					break;
				case 'i':
					printf("%s%d", j, va_arg(li, int));
					break;
				case 'f':
					printf("%s%f", j, va_arg(li, double));
					break;
				case 's':
					f = va_arg(li, char *);
					if (!f)
						f = "(nil)";
					printf("%s%s", j, f);
					break;
				default:
					x++;
					continue;
			}
			j = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(li);
}
