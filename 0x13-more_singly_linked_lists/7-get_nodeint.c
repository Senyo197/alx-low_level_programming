#include "lists.h"

/**
  *get_nodeint_at_index - get the index of a node
  *@head: start of the list
  *@index: index of the node
  *Return: points to the node at a given index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
	{
		head = head->next;
	}

	return (head);
}
