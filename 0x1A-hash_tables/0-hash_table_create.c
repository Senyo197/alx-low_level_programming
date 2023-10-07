#include "hash_tables.h"

/**
*hash_table_create - Creating a hash table
*@size: Determines the size of table
*Return: The created hash table or null if otherwise
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int a;

	hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_table == NULL)
    {
		return (NULL);
	}

	new_table->size = size;

	new_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		new_table->array[a] = NULL;
	}

	return (new_table);
}
