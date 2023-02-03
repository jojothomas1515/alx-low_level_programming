#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *cn, *temp;

	if (ht != NULL)
	{
		for (; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				cn = ht->array[i];
				ht->array[i] = NULL;
				while (cn)
				{
					temp = cn->next;
					free(cn->value);
					free(cn->key);
					free(cn);
					cn = temp;
				}
			}
		}
		free(ht->array);
		free(ht);
		ht = NULL;
	}
}
