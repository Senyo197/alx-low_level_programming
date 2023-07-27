#include "lists.h"

/**
  *add_node_end - Adding a new node at the end of a linked list
  *@head: Double pointer to the list_t list
  *@str: new string to be added in the new node
  *Return: null when failed or address of the new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_string;
	list_t *temp = *head;
	unsigned int len = 0;

	for (; str[len]; len++)

	new_string = malloc(sizeof(list_t));

	if (!new_string)
		return (NULL);

	new_string->str = strdup(str);
	new_string->len = len;
	new_string->next = NULL;

	if (*head == NULL)
	{
		*head = new_string;
		return (new_string);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_string;

	return (new_string);
}
