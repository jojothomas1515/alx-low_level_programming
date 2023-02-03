#include "hash_tables.h"

/**
 * hash_table_create - creates a hashtable of a specicific size
 *
 * @size: size of the hash table
 * Return: pointer to the a hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if (size <= 0)
		return (NULL);

	ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * ht->size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
