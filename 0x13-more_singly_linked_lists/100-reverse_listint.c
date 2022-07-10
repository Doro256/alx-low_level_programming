#include "lists.h"

/**
  * *reverse_listint - Delete a node at a given positiion.
  * @head: First node address.
  * Return: If success (1)
  *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t  *next, *prev;

	next = NULL;

	while (*head != NULL)
	{
		prev = next;
		next = *head;
		*head = (*head)->next = prev;
	}
	*head = next
	return (reverse)
}

