#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: pointer to the newly allocated space in memory...
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t l1, l2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = 0;

	while (s1[l1] != '\0')
	{
		l1++;
	}
	l2 = 0;
	while (s2[l2] != '\0')
	{
		l2++;
	}
	ptr = malloc(sizeof(char) * (l1 + l2 + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= l2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
