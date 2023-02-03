#include "hash_tables.h"

/**
 * key_index - generate index from a key with a hash function
 * @key: key string
 * @size: size of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
