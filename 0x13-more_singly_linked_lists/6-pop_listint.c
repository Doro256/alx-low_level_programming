#include "lists.h"


/**
  * pop_listint - deletes the head node of linked list
  * Return: the head node’s data (n)
  * @head: Pointer to a list
  *
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}


