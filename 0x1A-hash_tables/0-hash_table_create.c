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

	if (size == 0)
		return (NULL);

	ht = (hash_table_t *) malloc(sizeof(hash_node_t) * size);
	if (ht == NULL)
		return (NULL);

	memset(ht, 0, size);

	return (ht);
}
