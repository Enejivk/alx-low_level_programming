#include "hash_tables.h"
/**
 * hash_djb2-This function return and index of a hashtablbes
 * @str: This is a pointer to the string:
 * Return: This return a hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int i;
	int c = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		hash = hash * 33 + c;
	}
	return (hash);
}
