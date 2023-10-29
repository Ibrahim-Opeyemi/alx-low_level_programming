#include "main.h"

/**
 * _isupper - Checks if a character is uppercase or not
 * @c: The character to be checked
 * Return: 1 for uppercase character, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
