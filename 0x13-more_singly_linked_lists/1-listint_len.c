#include "lists.h"

/**
  * listint_len - Print elements of a singly linked list
  * @h: pointer to list
  * Return: integer
  */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int counter = 0;

	temp = h;

	while (temp != NULL)
	{
		/*  printf("%d\n", temp->n); */
		counter++;
		temp = temp->next;
	}
	return (counter);
}

