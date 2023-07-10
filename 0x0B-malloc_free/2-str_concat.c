#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int x, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = b = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[b] != '\0')
		b++;
	con = malloc(sizeof(char) * (x + b + 1));

	if (con == NULL)
		return (NULL);
	x = b = 0;
	while (s1[x] != '\0')
	{
		con[x] = s1[x];
		x++;
	}

	while (s2[b] != '\0')
	{
		con[x] = s2[b];
		x++, b++;
	}
	con[x] = '\0';
	return (con);
}
