#include "hash_tables.h"
#include <string.h>
/**
 * key_valuepair - create a new hash node with the given key and value
 * @key: the key for the new node
 * @value: the value for the new node
 * Return: a pointer to the new node, or NULL on failure
 */
hash_node_t *key_valuepair(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - insert a new node in the hash table
 * @ht: the hash table
 * @key: the key for the new node
 * @value: the value for the new node
 * Return: 0 on success, 1 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *new_node = key_valuepair(key, value);

	if (ht == NULL || key == NULL || value == NULL)
		return (1);
	if (new_node == NULL)
		return (1);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (0);
}

