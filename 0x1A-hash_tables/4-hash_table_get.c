#include "hash_tables.h"

/**
 * hash_table_get - get the value of a hash node
 * @ht:hash table
 * @key: key
 * Return: the value of the node
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cn = NULL;
	unsigned long idx = 0;

	if (ht == NULL)
		return (NULL);
	idx = key_index((unsigned char *) key, ht->size);
	cn = ht->array[idx];
	while (cn)
	{
		if (strcmp(cn->key, key) == 0)
			return (cn->value);
		cn = cn->next;
	}
}
