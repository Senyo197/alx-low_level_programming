#include "lists.h"

/**
  *get_dnodeint_at_index - Retrieves node at specific index in a list
  *@head: The start of the doubly linked list
  *@index: The index of the node to be retrieved
  *Return: Pointer to the node if found, NULL if otherwise
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int current_index = 0;

	if (head == NULL)
		return (NULL);

	current_node = head;
	while (current_node != NULL)
	{
		if (current_index == index)
			return (current_node);

		current_node = current_node->next;
		current_index++;
	}

	return (NULL);
}
