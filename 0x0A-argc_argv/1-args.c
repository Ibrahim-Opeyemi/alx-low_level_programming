#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: The number of arguments
 * @argv: array of commad line arguments
 * Return: Always 0 when (Success)
 */             
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
