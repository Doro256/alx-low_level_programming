#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list
  * @head: pointer to the address of first linked list node
  * @n: integer to store in new node
  * Return: the address of the new element, or NULL if it failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = temp;
	temp->prev = last;

	return (temp);
}
