#include "main.h"
#include <stdlib.h>

/**
 * count_word - a function to count the number of words in a string
 * @word: The input of the word
 * @height: The input of the height
 * Return: The total count of words
 */
void count_word(char **word, size_t height)
{
	if (word != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(word[height]);
			free(word[height]);
		free(word);
	}
}
/**
 * strtow - a function that splits a string into words
 * @str: The string for splitting
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **aout;
	size_t c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	{
		aout = malloc((height + 1) * sizeof(char *));
	}
		if (aout == NULL || height == 0)
		{
			free(aout);
			return (NULL);
		}
		for (i = k = 0; i < height; i++)
		{
			for (c = k; str[c] != '\0'; c++)
			{
				if (str[c] == ' ')
					k++;
				if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
				{
					aout[i] = malloc((c - k + 2) * sizeof(char));
					if (aout[i] == NULL)
					{
						count_word(aout, i);
						return (NULL);
					}
					break;
				}
			}
			for (j = 0; k <= c; k++, j++)
				aout[i][j] = str[k];
			aout[i][j] = '\0';
		}
		aout[i] = NULL;
		return (aout);
}
