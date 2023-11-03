#include "hash_tables.h"

/**
 * hash_table_delete - free and delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a = 0;
	hash_node_t *node, *x;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	while (a < ht->size)
	{
		node = (ht->array)[a];
		while (node)
		{
			x = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			node->key = NULL;
			node->value = NULL;
			free(node);
			node = x;
		}
		a++;
	}
	free(ht->array);
	free(ht);
}
