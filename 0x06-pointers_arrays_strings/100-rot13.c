#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @j: pointer to string params
 *
 * Return: *j
 */

char *rot13(char *j)
{
	int x;
	int y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; j[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (j[x] == data1[y])
			{
				j[x] = datarot[y];
				break;
			}
		}
	}
	return (j);
}
