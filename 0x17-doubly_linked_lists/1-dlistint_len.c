#include "lists.h"

/**
  *dlistint_len - Count the number of elements in the list
  *@h: The start of the list
  *Return: The number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
