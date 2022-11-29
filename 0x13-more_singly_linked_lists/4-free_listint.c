#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: singly linked list
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
