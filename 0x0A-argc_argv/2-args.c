#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * @argc: The number of arguments
 * @argv: array of commad line arguments
 * Return: Always 0 when successful.
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
