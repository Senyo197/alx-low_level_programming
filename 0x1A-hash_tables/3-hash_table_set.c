#include "hash_tables.h"


/**
*hash_table_set - Insert elements into the hash table
*@ht: The hash table
*@key: Key of element to be inserted in the table
*@value: Element to be inserted
*Return: 1 if success and 0 0r NULL for otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_entry;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	new_entry = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_entry == NULL)
		return (0);

	new_entry->key = strdup(key);
	new_entry->value = strdup(value);

	if (new_entry->key == NULL || new_entry->value == NULL)
	{
		free(new_entry->key);
		free(new_entry->value);
		free(new_entry);
		return (0);
	}

	new_entry->next = ht->array[index];
	ht->array[index] = new_entry;

	return (1);
}
