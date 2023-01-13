#include "lists.h"

/**
 * dlistint_len - calculates the length of a linked list
 * @h: pointer to doubly linked list
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		COUNT++;
		h = h->next;
	}

	return (count);
}
