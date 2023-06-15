#include <stdio.h>
/**
 * main - my main function
 * Return: 0
 */
int main(void)
{
	char i;
	int m;
	long int x;
	long long int b;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a int: %lu byte(s)\n", (unsigned long) sizeof(m));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
