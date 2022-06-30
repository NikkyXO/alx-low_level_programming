#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: size of the hash table
 * Return: A pointer to the new hash table in memory heap.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int i;

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
		return (NULL);
	hashTable->size = size;
	hashTable->array = malloc(size * sizeof(hash_node_t *));
	if (!hashTable->array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		hashTable->array[i] = NULL;
	}
	return (hashTable);
}
