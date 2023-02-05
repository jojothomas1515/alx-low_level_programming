#include "hash_tables.h"

/**
 * hash_table_set - this function adds an element to the hash table
 * @ht: hast table
 * @key: node item key
 * @value: node item value
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx = 0;
	hash_node_t *hn = NULL;
	hash_node_t *cn = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	if (strcmp("", key) == 0)
		return (0);

	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
		return (0);

	hn->key = strdup(key);
	hn->value = strdup(value);
	hn->next = NULL;

	idx = key_index((unsigned char *) key, ht->size);
	cn = ht->array[idx];

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = hn;
		return (1);
	}

	while (cn)
	{
		if (strcmp(cn->key, key) == 0)
		{
			free(cn->value);
			cn->value = strdup(value);
			return (1);
		}
	}

	hn->next = ht->array[idx];
	ht->array[idx] = hn;

	return (1);
}
