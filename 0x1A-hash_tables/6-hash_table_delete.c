#include "hash_tables.h"

/**
*hash_table_delete - Deletes in the hash table
*@ht: The hash table of which the element is to be deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *entry, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		entry = ht->array[i];

		while (entry != NULL)
		{
			temp = entry;
			entry = entry->next;

			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
