#include "lists.h"

/**
 * add_dnodeint_end - add node at end of doubly linked list
 * @head: head of doubly linked list
 * @n: number
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *list = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	while (list->next != NULL)
		list = list->next;

	list->next = new;
	new->prev = list;

	return (new);
}
