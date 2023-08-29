#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: The pointer to array
 * @size: The size of array
 * @cmp: The pointer to function to compare values
 *
 * Return: The index of the first element for which
 * the cmp function does not return 0,
 *         or -1 if no element matches or size <= 0
 *
 * Description: searches for an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
