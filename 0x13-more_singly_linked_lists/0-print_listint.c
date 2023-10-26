#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: This is the pointer to head of list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
