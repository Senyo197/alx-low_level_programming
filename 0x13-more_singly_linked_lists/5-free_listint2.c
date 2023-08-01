#include "lists.h"

/**
  *free_listint2 - free list
  *@head: the start of the list
  */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	*head = NULL;
}
