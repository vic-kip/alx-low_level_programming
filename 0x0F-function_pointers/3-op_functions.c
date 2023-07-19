#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sums two digits
 * @a: first digit.
 * @b: second digit.
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts of two numbers.
 * @a: first digit.
 * @b: second digit.
 * Return: subtracts of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies of two numbers.
 * @a: first digit.
 * @b: second digit.
 * Return: multiple of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides of two numbers.
 * @a: first digit.
 * @b: second digit.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the remainder of the dividing of two numbers.
 * @a: first digit.
 * @b: second digit.
 * Return: The remainder after the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
