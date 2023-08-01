#include "lists.h"

/**
  *free_listint - frees list
  *@head: start of the list
  */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head->next;
		free(head);

		head = hold;
	}
}
