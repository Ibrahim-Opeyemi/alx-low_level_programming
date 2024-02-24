#include <stdio.h>
/**
 * main - This is a program that prints all arguments it receives
 * @argc: This is the number of command line argument
 * @argv: This is the array that contains the program command line arg.
 * Return: (0) when successful.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
