#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: key
 * @size: size of hash table array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int v;

	if (size == 0)
		return (0);

	v = hash_djb2(key);
	return (v % size);
}
