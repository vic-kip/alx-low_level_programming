#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 * NULL when empty string is passed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int a = 0, b = 0, t = 0, v = 0;

	while (s1 && s1[t])
		t++;
	while (s2 && s2[v])
		v++;

	if (n < v)
		x = malloc(sizeof(char) * (t + n + 1));
	else
		x = malloc(sizeof(char) * (t + v + 1));

	if (!x)
		return (NULL);

	while (a < t)
	{
		x[a] = s1[a];
		a++;
	}

	while (n < v && a < (t + n))
		x[a++] = s2[b++];

	while (n >= v && a < (t + v))
		x[a++] = s2[b++];

	x[a] = '\0';

	return (x);
}
