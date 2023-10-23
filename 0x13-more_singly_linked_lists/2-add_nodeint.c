#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint- This function add node at the beginning
 *@head: This is a pointer to the structure
 *@n: This holds the value of n
 *Return: it return new_node which is the memmory adddress;
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			exit(1);
		}
	new_node->n = n;
	new_node->next = *head;
	(*head) = new_node;
	return (new_node);

}
