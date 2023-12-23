#include "hash_tables.h"
/**
 * key_index-This return the index of a key
 * @key: This is a key of the item
 * @size: This is the size of the hash table
 * Return: This is going to return the index of a particular key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	return (hash % size);
}
