#include "lists.h"

/**
  *reverse_listint - to reverse a linked list
  *@head: the start of the list
  *Return: the last node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_next = NULL;
	listint_t *prev = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	while (*head != NULL)
	{
		new_next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = new_next;
	}
	*head = prev;

	return (*head);
}
