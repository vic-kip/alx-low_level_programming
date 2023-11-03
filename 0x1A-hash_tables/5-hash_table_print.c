#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *x;
	char *a = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (i < ht->size)
	{
		x = ((ht->array)[i]);
		while (x)
		{
			printf("%s'%s': '%s'", a, x->key, x->value);
			a = ", ";
			x = x->next;
		}
		i++;
	}
	puts("}");
}
