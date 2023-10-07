#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: The string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *woman;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	woman  = malloc(sizeof(char) * (i + 1));

	if (woman == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		woman[r] = str[r];
	return (woman);
}
