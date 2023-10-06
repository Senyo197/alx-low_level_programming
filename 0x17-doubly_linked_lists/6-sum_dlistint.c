#include "lists.h"

/**
  *sum_dlistint - Sum all members of the list
  *@head: The start of the list;
  *Return: The sum total
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
