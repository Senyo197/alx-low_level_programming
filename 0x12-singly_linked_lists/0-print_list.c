#include "lists.h"

/**
  *print_list - list all elements
  *@h: head of the list
  *Return: string
  */
size_t print_list(const list_t *h)
{
	size_t string = 0;

	for (; h; string++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}

	return (string);
}
