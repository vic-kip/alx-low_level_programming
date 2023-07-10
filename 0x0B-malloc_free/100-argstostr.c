#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int x, i, b = 0, a = 0;
	char *y;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (i = 0; av[x][i]; i++)
			a++;
	}
	a += ac;

	y = malloc(sizeof(char) * a + 1);
	if (y == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (i = 0; av[x][i]; i++)
	{
		y[b] = av[x][i];
		b++;
	}
	if (y[b] == '\0')
	{
		y[b++] = '\n';
	}
	}
	return (y);
}
