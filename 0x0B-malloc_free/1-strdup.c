#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *c;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	c = malloc(sizeof(char) * (x + 1));

	if (c == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		c[y] = str[y];

	return (c);
}
