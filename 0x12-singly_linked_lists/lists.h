#ifndef LISTS_H
#define LISTS_H

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

#endif /* LISTS_H */
