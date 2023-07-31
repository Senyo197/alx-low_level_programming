#include "lists.h"

/**
  *find_listint_loop - searches for a loop
  *@head:the start of the loop
  *Return: address of the node or NULL if node not found
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *search1 = head;
	listint_t *search2 = head;

	while (search2 && search2->next)
	{
		search1 = search1->next;
		search2 = search2->next->next;

		if (search1 == search2)
		{
			search1 = search2;

			while (search1 != search2)
			{
				search1 = search1->next;
				search2 = search2->next;
			}

			return (search1);
		}
	}

	return (NULL);
}
