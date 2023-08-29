#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: The pointer to pointer to head of list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next;

	while (current)
	{
		count++;
		next = current->next;
		free(current);
		current = next;

		if (current == *h)
		{
			*h = NULL;
			return (count);
		}
	}

	*h = NULL;
	return (count);
}
