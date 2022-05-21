#include "lists.h"

/**
  * add_node - adds a new node at the beginning of list
  * @head: pointer to the head of the list
  * @str: string to be added
  * Return: returns the address to the new element or NULL
  * if failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *) malloc(sizeof(list_t));
	new_node->str = head;
	new_node->next = head;
	head = new_node;

	return (head);
}

