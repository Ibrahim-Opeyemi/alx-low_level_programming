#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: The string
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - Comparing the character of the string
 * @s: The string
 * @L: The smallest iterator
 * @R: The largest iterator
 * Return: int
 */
int compare_string(char *s, int L, int R)
{
	if (*(s + L) == *(s + R))
	{
		if (L == R || L == R + 1)
			return (1);
		return (0 + compare_string(s, L + 1, R - 1));
	}
	return (0);
}
/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: The string to be tested
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
