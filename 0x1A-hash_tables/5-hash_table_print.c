#include "hash_tables.h"

/**
*hash_table_print - Print hash tables
*@ht: Hash table to be printed
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *entry = ht->array[i];

		while (entry != NULL)
		{
			printf("'%s': '%s'", entry->key, entry->value);

			if (entry->next != NULL)
				printf(", ");

			entry = entry->next;
		}
	}
	printf("\n");
}
