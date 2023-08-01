#include "lists.h"

/**
  *sum_listint - sum up everything in the list
  *@head: pointing to the start of the linked list
  *Return: sum of the list
  */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
