#include "main.h"
#include <unistd.h>
/**
 * _putchar - char c to stdout
 * @c: char
 * Return: If successful 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
