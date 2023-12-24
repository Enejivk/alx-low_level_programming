#include "hash_tables.h"
/**
 * hash_table_set- This function add insert element to the table
 * @key: This is thhe key of the item to be added
 * @value: This is the value of item to be added
 * @ht: This is the hashtable
 * Return: It return 1 if succefull and return 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    long int index;
    hash_node_t *new_node, *current;

    if (key == NULL || *key == '\0'|| ht == NULL)
        return 0;
    index = key_index((unsigned char *)key, ht->size);
    new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
    if(new_node == NULL)
        return (0);
    new_node->key = strdup(key);
    if(new_node->key == NULL)
    {
        free(new_node);
        return(0);
    }
    new_node->value = strdup(value);
    if(new_node->value == NULL)
    {
        free(new_node);
        return(0);
    }

    new_node->next = NULL;
    current = ht->array[index];
    ht->array[index] = new_node;
    new_node->next = current;
    return (1);
}