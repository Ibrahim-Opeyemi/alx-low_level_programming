#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - function that checks if a character is a digit
 * @c: character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/**
 * _strlen - This function returns the length of a string
 * @s: string to check
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
/**
 * _puts - prints a string to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		putchar(str[i]);
}

/**
 * is_number - This function checks if a string is composed of digits
 * @str: The string to check
 * Return: 1 if str is composed of digits, 0 otherwise
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);

	return (1);
}

/**
 * main - a program that multiplies two positive numbers
 * @argc: The number of arguments passed to program
 * @argv: The array of pointers to command line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j, len1, len2, carry, n1, n2, sum;
	int *result;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	result = calloc(len1 + len2, sizeof(*result));
	if (!result)
		return (1);
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = argv[1][i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = argv[2][j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] += carry;
	}
	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	for (; i < len1 + len2; i++)
		printf("%d", result[i]);
	printf("\n");
	free(result);
	return (0);
}
