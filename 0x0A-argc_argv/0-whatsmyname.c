#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line
 *
 * @argc: This is the number of command line arguments.
 * @argv: This is the array that contains the command line argument
 *
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("No program name provided.\n");
	}
	return (0);
}
