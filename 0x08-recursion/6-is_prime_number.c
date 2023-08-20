#include "main.h"
/**
 * prime_a - returns 1 if the input integer is a prime number
 * @a: Dividend
 * @b: Divisor
 * Return: (0)
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: The input number (to be considered)
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
