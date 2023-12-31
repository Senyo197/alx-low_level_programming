#ifndef LISTS_H
#define LISTS_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
*struct list_node - singly linked list
*@str: string
*@next: next node
*@len: length of the string
*/
typedef struct list_node
{
char *str;
unsigned int len;
struct list_node *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void first(void) __attribute__ ((constructor));

#endif /* LISTS_H */
