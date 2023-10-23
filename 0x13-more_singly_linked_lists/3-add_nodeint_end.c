#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end- Add node at the end of linklist
 * @head: This is a pointer to the pointer(double) of the first node
 * @n: This holds the value of n;
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *curr;
	
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if(new_node == NULL)
	{
		exit(1);
	}
	new_node->n = n;
	new_node->next = NULL;
	if(*head == NULL)
	{
		*head = new_node;
		return new_node;
	}
	curr = *head;
	while(curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
	return new_node;

}
