#include <stdio.h>
#include <stdlib.h>
/**
 * main - The entry point of the program for the multiples of two numbers
 * @argc: This is the number of command-line arguments
 * @argv: This is the array of command-line arguments
 *
 * Return: (0) on success, (1) on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
