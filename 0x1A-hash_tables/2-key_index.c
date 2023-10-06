#include "hash_tables.h"

/**
*key_index - Determines the index of key
*@key: The Key's index to determined
*@size: size of the values
*Return: The index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
