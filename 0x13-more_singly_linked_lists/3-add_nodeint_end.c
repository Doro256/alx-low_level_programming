"include "lists.h"
/**
* add_nodeint_end - add new node at end of list
* @head: address of first node of list
* @n: integer to insert in node
* Return: address of new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp1, *temp2;

	/* create new node */
	temp1 = malloc(sizeof(listint_t));
	if (temp1 == NULL)
		return (NULL);

	temp1->n = n;
	temp1->next = NULL;
	/* if head is NULL, list is empty */
	if(*head == NULL)
	{
		*head == temp1;
		return (temp1);
	}
	else
	{
		temp2 = *head;

		/* address of last node will be null */
		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}

		/* add new node at end of linked list */
		temp2->next = temp;
		return (temp);
	}
}


