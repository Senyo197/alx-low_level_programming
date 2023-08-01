#include "lists.h"

/**
  *listint_len - gets the number of elements in the list
  *@h: points to the start of listint_t
  *Return: the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t lnth;

	for (lnth = 0; h; lnth++)
		h = h->next;

	return (lnth);
}
