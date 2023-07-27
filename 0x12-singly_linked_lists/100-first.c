#include <stdio.h>

void x(void) __attribute__ ((constructor));

/**
 * x - prints sentence then main func executes
 */
void x(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
