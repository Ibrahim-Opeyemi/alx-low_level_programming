#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - This function performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on wrong number of arguments,
 *         99 on invalid operator, 100 on division by zero
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	char *op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	f = get_op_func(op);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
