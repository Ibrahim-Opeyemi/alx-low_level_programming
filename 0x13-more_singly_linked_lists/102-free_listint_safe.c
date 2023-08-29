#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: pointer to pointer to head of list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	while (*h != NULL)
	{
		count++;
		if (*h <= (*h)->next)
		{
			*h = NULL;
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}

	return (count);
}
