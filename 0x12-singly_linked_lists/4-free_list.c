#include "lists.h"

/**
  *free_list - frees a linked list
  *@head: list_t list to be freed
  */
void free_list(list_t *head)
{
	while (head)
	{
		list_t *temporal = head;
		head = head->next;

		if (temporal->str)
			free (temporal->str);

		free (temporal);
	}
}
