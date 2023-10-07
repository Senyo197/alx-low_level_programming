#include "hash_tables.h"

/**
*hash_table_get - Searches for a value asssociated with the key
*@ht: The hash table
*@key: The key to use to search
*Return: The retrieved value or NULL if otherwise
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
