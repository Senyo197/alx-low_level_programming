#include "lists.h"

/**
  *free_listint_safe - frees a list with a loop
  *@h: the start of the list
  *Return: number of freed list
  */
size_t free_listint_safe(listint_t **h)
{
	size_t lnth = 0;
	listint_t hold;
	listint_t *new = h;

	if (!h || !*h)
		return (0);

	while (new != NULL)
	{
		if (new <= new->next)
		{
			hold = new;
			new = new->next;
			free(hold);
			lnth++;
		}
		else
		{
			free(new);
			*h = NULL;
			lnth++;
			break;
		}
	}

	*h = NULL;
	return (lnth);
}
