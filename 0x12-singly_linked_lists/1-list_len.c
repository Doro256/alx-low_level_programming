#include "lists.h"
/**
  * list_len - Finds the number of elements in linked list_t list.
  * @h: pointer to elements in list
  * Return: The number of elements in list
  */
size_t list_len(const list_t *h)
{
size_t count = 0;

	while (h != NULL)
	{
		if (h -> str != NULL)
		
			count++;
		
		else

		        h = h -> next;
	}
	return(count);
}



