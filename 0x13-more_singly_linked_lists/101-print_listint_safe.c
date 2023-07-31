#include "lists.h"

/**
  *print_listint_safe - safely prints a list with a node
  *@head: start of the list
  *Return: printed list
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *st_loop = NULL;
	size_t nodes = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	if (head == NULL)
		return (0);
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = st_loop;
			break;
		}
	}
	while (head != st_loop)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	if (st_loop)
	{
		printf("[%p] %d\n", (void *)st_loop, st_loop->n);
		head = st_loop->next;
		nodes++;
		while (head != st_loop)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
		printf("[%p] %d\n", (void *)st_loop, st_loop->n);
	}
	return (nodes);
}
