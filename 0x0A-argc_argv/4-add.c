#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - This is a program that adds positive numbers.
 * @argc: This is the number of command-line arguments.
 * @argv: This is the array of command-line arguments.
 *
 * Return: (0) on success, (1) on error
 */
int main(int argc, char *argv[])
{
	int i, num;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j;

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]) && arg[j] != '-')
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(arg);
		if (num > 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
