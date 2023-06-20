#include "main.h"

/**
 * _islower - check if char is lowercase
 * Return: 1 if char is lowercase, otherwise 0
 */

int _islower(int b)
{
	if (b >= 'a' && b <= 'z')
		return (1);
	else
		return (0);
}

