#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: the numer of command line arguments
 * @argv: the array containing the command line arguments
 * Return: (0) when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
