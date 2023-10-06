#include "lists.h"

/**
  *add_dnodeint - Add new node to the beginning of the list
  *@head: The start of the list
  *@n: Node to be added
  *Return: Address of the new node or NULL on failure
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
