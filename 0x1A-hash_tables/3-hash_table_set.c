#include "hash_tables.h"

/**
 * create_and_add_node - malloc, set values, and insert node into hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * @idx: index to insert in at hash table
 * Return: 1 if success, 0 if fail
 */
int create_and_add_node(hash_table_t *ht, const char *key, const char *value,
			unsigned long int idx)
{
	hash_node_t *node = NULL;
	char *x;
	char *i;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	x = strdup(key);
	if (!x)
	{
		free(node);
		return (0);
	}

	i = strdup(value);
	if (!i)
	{
		free(x);
		free(node);
		return (0);
	}

	node->key = x;
	node->value = i;

	if ((ht->array)[idx] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[idx];
	(ht->array)[idx] = node;

	return (1);
}

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int a;
	hash_node_t *node = NULL;
	char *b;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	a = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[a];
	while (node && (strcmp(key, node->key) != 0))
		node = node->next;
	if (node != NULL)
	{
		b = strdup(value);
		if (!b)
			return (0);
		if (node->value)
			free(node->value);
		node->value = b;
		return (1);
	}

	return (create_and_add_node(ht, key, value, a));
}
