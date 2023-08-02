#include "lists.h"

/**
  *insert_nodeint_at_index - to insert node at index
  *@head: pointing to the start of the list
  *@idx: index at which node to bre inserted
  *@n: data to inserted
  *Return: inserted data
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head, *new_node;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
