#include <stdio.h>
/**
 * main - This prints the number of arguments.
 * @argc: This is the number of command line argument.
 * @argv: This is the array that contains the program command line arg.
 * Return: (0) when successful.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
