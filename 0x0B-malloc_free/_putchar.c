#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character b to stdout
 * @b: The character to print
 * Return: On success 1.
 * If error, -1 is returned.
 */
int _putchar(char b)
{
	return (write(1, &b, 1));
}
