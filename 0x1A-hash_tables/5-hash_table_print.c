#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, p_flag = 0;
	hash_node_t *cn = NULL;

	if (ht == NULL)
		goto end_of;

	putchar('{');
	for (; i < ht->size; i++)
	{
		cn = ht->array[i];
		while (cn)
		{
			if (p_flag)
				printf(", ");

			printf("'%s': '%s'", cn->key, cn->value);
			p_flag = 1;
			cn = cn->next;
		}
	}
	putchar('}');
	putchar('\n');

		end_of:
	(void) NULL;

}
