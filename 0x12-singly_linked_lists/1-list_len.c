#include "main.h"
/**
  * list_len - Finds the number of elements in linked list_t list.
  * @h: pointer to elements in list
  * Return: The number of elements in list
  */
size_t list_len(const list_t *h)
{
	int count = 0;
	size_t nodes = 0;

	while (h -> str != NULL)
	{
		count++;
		h = h -> next;
	}
	return(count);
}



