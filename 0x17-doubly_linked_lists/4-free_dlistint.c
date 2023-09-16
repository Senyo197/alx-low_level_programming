#include "lists.h"

/**
  *free_dlistint - Free list nodes
  *@head: The start of the list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		temp = temp->next;
		free(temp);
	}
}
