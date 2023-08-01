#include "lists.h"

/**
  *pop_listint - delete first element from the list
  *@head: data to be deleted
  *Return: deleted data
  */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;

	return (numb);
}
