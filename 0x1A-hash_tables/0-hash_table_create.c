#include "hash_tables.h"

/**
 * hash_table_create - create hash table given size
 * @size: size
 * Return: pointer to table; NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *f;
	hash_node_t **i;
	unsigned long int x = 0;

	if (size == 0)
		return (NULL);

	f = malloc(sizeof(hash_table_t));
	if (!f)
		return (NULL);
	i = malloc(sizeof(*i) * size);
	if (!i)
	{
		free(f);
		return (NULL);
	}
	while (x < size)
	{
		i[x] = NULL;
		x++;
	}

	f->size = size;
	f->array = i;

	return (f);
}
