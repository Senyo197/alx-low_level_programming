#include "lists.h"

/**
  *list_len - Number of elements in a linked list
  *@h: pointer to the list_t list
  *Return: total number of linked numbers
  */
size_t list_len(const list_t *h)
{
	size_t z = 0;

	for (; h; z++)
		h = h->next;

	return (z);
}
