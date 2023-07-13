#include "main.h"
#include <unistd.h>
/**
 * _putchar -the character c is written out to stdout
 * @c: prints the character
 * Return: 1 if succesful
 *  error, -1 is retuned, errno is printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
