#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * main - This function prints the opcodes of its own main function
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 on success, 1 on wrong number of arguments,
 * 2 on negative number of bytes
 */
int main(int argc, char **argv)
{
	int num_bytes, i;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	main_ptr = (char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", *(main_ptr + i));
		if (i == num_bytes - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
