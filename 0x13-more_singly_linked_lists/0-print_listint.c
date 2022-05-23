#include "lists.h"

/**
  * print_listint - Print elements of a singly linked list
  * @h: pointer to list
  * Return: integer
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int counter = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}
	return (counter);
}

