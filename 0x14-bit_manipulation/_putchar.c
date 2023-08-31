#include "main.h"
#include <unistd.h>
/**
 * _putchar - char is written
 * @c: char
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
