#include "hash_tables.h"
/**
 * hash_table_create- This function create a hash table
 * @size: This contain the size of the table
 * Return: It is going to return hash_table with the recomended size
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t));
	if (table->array == NULL)
	{
		return (NULL);
	}
	for(i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
