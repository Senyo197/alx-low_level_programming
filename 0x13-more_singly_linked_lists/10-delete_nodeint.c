#include "lists.h"

/**
  *delete_nodeint_at_index - deletes node at index
  *@head: pointing to the start of the node
  *@index: index at which node to be deleted
  *Return: 1 for success and -1 for failure
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_be_deleted;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		node_to_be_deleted = *head;
		*head = (*head)->next;
		free(node_to_be_deleted);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if ((*head)->next == NULL)
			return (-1);
		*head = (*head)->next;
	}

	node_to_be_deleted = (*head)->next;
	(*head)->next = node_to_be_deleted->next;

	return (1);
}
