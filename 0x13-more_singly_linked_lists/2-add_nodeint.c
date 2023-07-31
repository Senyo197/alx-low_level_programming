#include "lists.h"

/**
  *add_nodeint - adds new node to a list
  *@head: the start of the list
  *@n: data to be inserted
  *Return: newly added node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node -> n = n;
	new_node -> next = *head;
	*head = new_node;

	return (new_node);
}
