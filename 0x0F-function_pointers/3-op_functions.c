#include "3-calc.h"
#include "function_pointers.h"
#include <stddef.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This is a function that returns the sum of a and b.
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This is a function that returns the difference of a and b.
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This is a function that returns the product of a and b.
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns the result of the division of a by b
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the result of division of a by b, or 0 if b is 0
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (0);

	return (a / b);
}

/**
 * op_mod - a function that returns the remainder of the division of a by b
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the remainder of division of a by b, or 0 if b is 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (0);

	return (a % b);
}
