#include "main.h"
/**
 * leet - encode into 1337speak
 * @v: input value
 * Return: v value
 */
char *leet(char *v)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; v[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (v[x] == s1[y])
			{
				v[x] = s2[y];
			}
		}
	}
	return (v);
}
