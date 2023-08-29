#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: The pointer to head of list
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node of a listint_t linked list,
 * or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;
	return (head == NULL ? NULL : head);
}
