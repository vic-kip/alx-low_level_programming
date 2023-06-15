#include <stdio.h>
/**
 * main - my main function
 * Return: 0
 */
int main(void)
{
	char vi;
	int num;
	long int x;
	long long int b;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(vi));
	printf("Size of a int: % lu byte(s)\n", (unsigned long) sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
